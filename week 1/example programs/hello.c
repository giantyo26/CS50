#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("What's your name?? "); //Prompt user to type in their name
    printf("Hello, %s\n", answer);//Print Hello with the inputted username
}