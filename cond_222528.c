#include <stdio.h>
#include <cs50.h>

int sign(int n);

int main(void)
{

    int number = get_int("Enter a number: ");

    int result = sign(number);


    if (result == 1)
    {
        printf("The number is positive.\n");
    }
    else if (result == -1)
    {
        printf("The number is negative.\n");
    }
    else
    {
        printf("The number is zero.\n");
    }

    return 0;
}


int sign(int n)
{
    if (n > 0)
    {
        return 1;
    }
    else if (n < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
