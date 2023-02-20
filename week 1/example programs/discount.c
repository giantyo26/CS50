#include <stdio.h>
#include <cs50.h>

float discount(float price, int percentage);

int main(void)
{
    float regular = get_float("Regular price: "); //prompt aski for price
    int percent_off = get_int("Percent off: "); // prompt for percentage off
    float sale = discount(regular, percent_off);// Assign discount function that takes 2 inputted parameters to sale variable

    printf("Your discounted price is %.2f\n", sale);
}

float discount(float price, int percentage) // Function that calculates discounted price
{
    return price * (100 - percentage) / 100;
}