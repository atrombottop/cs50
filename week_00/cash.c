#include <cs50.h>
#include <stdio.h>
//define
int main(void)
{
int x = get_int("Change owed: ");
//prompt user for a positive number
while (x < 0)
{
    x = get_int("Change owed: ");
}
//divide and modulus
int quarters = (x / 25);
int cents2 = (x % 25);

int dimes = (cents2 / 10);
int cents3 = (cents2 % 10);

int nickels = (cents3 / 5);
int cents4 = (cents3 % 5);

int pennies = (cents4 / 1);
int cents5 = (cents4 % 1);

//get change in coins
    printf("%i\n", quarters + dimes + nickels + pennies);
}