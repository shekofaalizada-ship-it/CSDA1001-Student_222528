#include <stdio.h>
#include <cs50.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int mod(int a, int b);

int main(void)
{

    int a = get_int("Enter first integer: ");
    int b = get_int("Enter second integer: ");

    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", subtract(a, b));
    printf("Multiplication: %d\n", multiply(a, b));

    if (b != 0)
    {
        printf("Remainder: %d\n", mod(a, b));
    }
    else
    {
        printf("Remainder: Undefined \n");
    }

    return 0;
}
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int mod( int a, int b)
{
    return a % b;
}
