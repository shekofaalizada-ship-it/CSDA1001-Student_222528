#include <stdio.h>
#include <cs50.h>

long factorial(int n);

int main(void)
{
    int n = get_int("Enter a non-negative integer: ");

    long result = factorial(n);

    printf("Factorial: %ld\n", result);

    return 0;
}

long factorial(int n)
{
    long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}
