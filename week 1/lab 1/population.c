#include <cs50.h>
#include <stdio.h>
/*Say we have a population of n llamas. Each year, n / 3 new llamas are born, and n / 4 llamas pass away.
For example, if we were to start with n = 1200 llamas, then in the first year, 1200 / 3 = 400 new llamas would be born and 1200 / 4 = 300 llamas
would pass away. At the end of that year, we would have 1200 + 400 - 300 = 1300 llamas.*/

int main(void)
{
    int start_size;
    int end_size;
    int year;
    // Prompt for start size
    do
    {
        start_size = get_int("Start size: ");
    }
    while (start_size < 9);

    // Prompt for end size
    do
    {
        end_size = get_int("End size: ");
    }
    while (end_size < start_size);

    // Calculate number of years until we reach threshold
    for (int i = 1; start_size < end_size; i++)
    {
        int llamas_changes = (start_size / 3) - (start_size / 4);
        start_size = start_size + llamas_changes;
        year = i;
    }

    // Print number of years
    printf("Years: %i\n", year);
}
