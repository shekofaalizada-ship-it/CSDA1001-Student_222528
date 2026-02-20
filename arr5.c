#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>


bool is_palindrome(int arr[], int len);

int main(void)
{
    int n = get_int("Enter a number: ");

    int temp = n;
    int len = 0;

    while (temp > 0)
    {
        len++;
        temp /= 10;
    }

    int arr[len];
    temp = n;


    for (int i = len - 1; i >= 0; i--)
    {
        arr[i] = temp % 10;
        temp /= 10;
    }


    if (is_palindrome(arr, len))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}

bool is_palindrome(int arr[], int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        if (arr[i] != arr[len - 1 - i])
        {
            return false;
        }
    }
    return true;
}
