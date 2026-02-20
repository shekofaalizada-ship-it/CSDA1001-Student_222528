#include <stdio.h>
#include <cs50.h>


void count_even_odd(int arr[], int n, int *even, int *odd);

int main(void)
{
    int n = get_int("Enter number of elements: ");
    int arr[n];


    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("Element %d: ", i + 1);
    }

    int even = 0;
    int odd = 0;


    count_even_odd(arr, n, &even, &odd);

    printf("Even count: %d\n", even);
    printf("Odd count: %d\n", odd);

    return 0;
}


void count_even_odd(int arr[], int n, int *even, int *odd)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            (*even)++;
        }
        else
        {
            (*odd)++;
        }
    }
}
