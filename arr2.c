#include <stdio.h>
#include <cs50.h>

int sum_array(int arr[], int n);

int main(void)
{
    int n = get_int("Enter number of elements: ");
    int arr[n];


    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("Element %d: ", i + 1);
    }


    int sum = sum_array(arr, n);


    float average = (float) sum / n;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}

int sum_array(int arr[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }

    return total;
}
