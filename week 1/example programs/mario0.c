#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    for (int i = 0; i < n; i++) // For each row
    {

        for (int j = 0; j < n; j++) // For each column
        {
            printf("#"); // Print a brick
        }

        printf("\n"); // Move to new line
    }
}


