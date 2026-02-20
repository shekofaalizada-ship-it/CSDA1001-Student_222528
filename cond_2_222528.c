#include <stdio.h>
#include <cs50.h>

char grade(int marks);

int main(void)
{
    int marks = get_int("Enter marks (0-100): ");

    char result = grade(marks);

    printf("Grade: %c\n", result);

    return 0;
}

char grade(int marks)
{
    if (marks >= 80 && marks <= 100)
    {
        return 'A';
    }
    else if (marks >= 70 && marks <= 79)
    {
        return 'B';
    }
    else if (marks >= 60 && marks <= 69)
    {
        return 'C';
    }
    else if (marks >= 50 && marks <= 59)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}
