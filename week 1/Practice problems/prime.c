#include <cs50.h>
#include <stdio.h>

// Generate all prime numbers in a range specified by the user
bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // Check if number  equal to 1
    if (number == 1)
    {
        return false;
    }
    // Check if number  equal to 2
    if (number == 2)
    {
        return true;
    }
    // Check number if number divisible by 2
    if (number % 2 == 0)
    {
        return false;
    }
    // Check number if divisible by 2, 3, or 5
    for (int i = 3; i < number; i += 2)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;

}

