#include <stdio.h>
#include <cs50.h>

float fahrenheit(float c);

int main(void)
{
    float c = get_float("Enter temperature in Celsius: ");

    float f = fahrenheit(c);
    printf("Temperature in Fahrenheit: %.2f\n", f);

    return 0;
}

float fahrenheit(float c)
{
    return (c * 9 / 5) + 32;
}
