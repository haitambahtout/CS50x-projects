#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int change;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0);
    int cents = change;

    int quarters = cents / 25;
    cents = cents - (quarters * 25);

    int dimes = cents / 10;
    cents = cents - (dimes * 10);

    int nickels = cents / 5;
    cents = cents - (nickels * 5);

    int pennis = cents;

    int total = quarters + dimes + nickels + pennis;
    printf("%i\n", total);
}
