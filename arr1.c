#include <stdio.h>
#include <cs50.h>


void input_array(int arr[], int n);
void print_array(int arr[], int n);

int main(void)
{
    int n = get_int("Enter number of elements: ");
    int arr[n];


    input_array(arr, n);


    print_array(arr, n);

    return 0;
}

void input_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("Element %d: ", i + 1);
    }
}


void print_array(int arr[], int n)
{
    printf("Array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
