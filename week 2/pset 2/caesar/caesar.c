#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function prototype
bool check_only_digits(string key);
char rotate(char c, int n);

int main(int argc, string argv[])
{
    // Handle if argument count isn't 2
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // Handle if the key is non-digit
    if (!check_only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Convert cmd-line argument from string to int
    int k = atoi(argv[1]);

    // Prompt user for plaintext
    string plaintext = get_string("Plaintext: ");

    printf("Ciphertext: ");

    for (int i = 0; i < strlen(plaintext); i++)
    {
        rotate(plaintext[i], k);
    }
    printf("\n");
}

bool check_only_digits(string key)
{
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isdigit(key[i]))
        {
            return false;
        }
    }
    return true;
}

char rotate(char c, int key)
{
    // Handle uppercase letter to rotate by key
    if (isupper(c))
    {
        return printf("%c", (c - 65 + key) % 26 + 65);
    }
    // Handle lowercase letter to rotate by key
    else if (islower(c))
    {
        return printf("%c", (c - 97 + key) % 26 + 97);
    }
    // Handle if the character is non-alphabetic
    else
    {
        return printf("%c", c);
    }
}