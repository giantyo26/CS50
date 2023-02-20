#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    //prompt user for a number between 1 to 8
    do
    {
         n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    for (int i = 0; i < n; i++)// For each row
    {
        for (int j = -1; j < i; j++)// For each column
        {
            printf("#");
        }

        printf(".\n");

    }
}