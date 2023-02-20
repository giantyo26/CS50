#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

// function prototype
float calc_hours(int hours[], int weeks, char output);

int main(void)
{

    int weeks = get_int("Number of weeks taking CS50: ");
    int hours[weeks];// declare array size with inputted weeks integer

    // loops for getting value to add to each array index
    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }
    // loops for getting expected char (if the expected char lowercase convert to uppercase)
    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');

    printf("%.1f hours\n", calc_hours(hours, weeks, output));
}

// calc_hours function
float calc_hours(int hours[], int weeks, char output)
{
    int hours_sum = 0;
    // loops for adding value in each hours[weeks] index to hours_sum
    for (int i = 0; i < weeks; i++)
    {
        hours_sum += hours[i];
    }

    // if-else statements for returning which calculated value to return
    if (output == 'A')
    {
        return hours_sum / (float) weeks;
    }
    else
    {
        return hours_sum;
    }
}