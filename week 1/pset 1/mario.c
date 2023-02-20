#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // Prompt user for a number between 1 to 8
    do
    {
        height = get_int("height: ");
    }
    while (height < 1 || height > 8);


    for (int row = 0; row < height; row++)// For each row
    {
        // Print spaces
        for (int space = height - 1; space > row; space--)
        {
            printf(" ");
        }

        // Print hashes
        for (int hash = 0; hash < row + 1; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}