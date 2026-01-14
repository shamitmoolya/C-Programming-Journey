
/* 1. Write a program to input two integers and print:

    Sum
    Difference
    Product
    Quotient     */


#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the first number :\n");
    scanf("%d", &a);
    
    printf("Enter the second number :\n");
    scanf("%d", &b);

    printf("The sum : %d\n", a+b);
    printf("The difference : %d\n", a-b);
    printf("The product : %d\n", a*b);
    printf("The quotient : %d\n", a/b);

    return 0;
}




