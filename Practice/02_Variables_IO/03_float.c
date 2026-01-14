
// 3. Write a program to input a float number and print it with 2 decimal places.

#include <stdio.h>

int main()
{
    float a, b;

    printf("Enter the number :\n");
    scanf("%f", &a);

    printf("Your number was %.2f.", a);

    return 0;
}

