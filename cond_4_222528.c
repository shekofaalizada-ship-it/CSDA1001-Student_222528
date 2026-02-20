#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>

bool is_leap(int year);

int main(void)
{

    int year = get_int("Enter a year: ");

    if (is_leap(year))
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not Leap Year\n");
    }

    return 0;
}


bool is_leap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
