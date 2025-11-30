#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("X: ");
    int y = get_int("Y: ");
    //float for real numbers
    printf("%.5f\n", (float) x / y);
}