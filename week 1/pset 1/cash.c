#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int change_owed;
    do
    {
        change_owed = get_int("Change owed: ");
    }
    while (change_owed < 0);
    return change_owed;
}

int calculate_quarters(int cents)
{
    int n_quarters = 0;
    while (cents >= 25)
    {
        cents -= 25;
        n_quarters++;
    }

    return n_quarters;
}

int calculate_dimes(int cents)
{
    int n_dimes = 0;
    while (cents >= 10)
    {
        cents -= 10;
        n_dimes++;
    }

    return n_dimes;
}

int calculate_nickels(int cents)
{
    int n_nickels = 0;
    while (cents >= 5)
    {
        cents -= 5;
        n_nickels++;
    }

    return n_nickels;
}

int calculate_pennies(int cents)
{
    int n_pennies = 0;
    while (cents >= 1)
    {
        cents -= 1;
        n_pennies++;
    }

    return n_pennies;
}