#include <stdio.h>
#include <cs50.h>

int ticket_price(int age, int student);

int main(void)
{

    int age = get_int("Enter age: ");
    int student = get_int("Student? (1=Yes, 0=No): ");


    int price = ticket_price(age, student);

    printf("Ticket Price: %d\n", price);

    return 0;
}

int ticket_price(int age, int student)
{
    int price;

    if (age < 12)
    {
        price = 50;
    }
    else if (age >= 12 && age <= 60)
    {
        if (student == 1)
        {
            price = 80;
        }
        else
        {
            price = 100;
        }
    }
    else
    {
        price = 60;
    }

    return price;
}
