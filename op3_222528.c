#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>

bool is_even(int n);

int main(void)
{
    int number = get_int("Enter a number: ");

    if (is_even(number))
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

    return 0;
}

bool is_even(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
