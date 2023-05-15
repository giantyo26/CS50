#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int coleman_liau_index(int letters, int words, int sentences);

int main(void)
{
    // Coleman-Liau index variable
    float index;

    // Prompt user for text
    string text = get_string("Text: ");

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    float L = ((float) letters / (float) words) * 100;
    float S = ((float) sentences / (float) words) * 100;

    // Coleman-Liau index formula
    index = 0.0588 * L - 0.296 * S - 15.8;
    index = round(index);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 0 && index <= 16)
    {
        printf("Grade %i\n", (int) index);
    }
    else
    {
        printf("Grade 16+\n");
    }
}

int count_letters(string text)
{
    // Variable to keep track of total letters
    int total_letters = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            total_letters++;
        }
    }
    return total_letters;
}

int count_words(string text)
{
    // Variable to keep track of total words
    int total_words = 1;

    for (int i = 0; i < strlen(text); i++)
    {
        if (isspace(text[i]))
        {
            total_words++;
        }
    }
    return total_words;
}

int count_sentences(string text)
{
    // Variable to keep track of total sentences
    int total_sentences = 0;

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            total_sentences++;
        }
    }
    return total_sentences;
}