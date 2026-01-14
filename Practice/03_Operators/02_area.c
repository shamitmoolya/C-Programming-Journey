
/* 2. Write a program to input length and breadth of a rectangle and print:

    Area
    Perimeter   */


#include <stdio.h>

int main()
{
    float l, b;

    printf("Enter the length of rectangle :\n");
    scanf("%f", &l);
    
    printf("Enter the breadth of rectangle :\n");
    scanf("%f", &b);

    printf("Area : %.2f\n", l*b);

    printf("Perimeter : %.2f\n", 2*(l+b));

    return 0;
}

// Note that we used 2*(l+b) instead of 2(l+b) as if we did it then the compiler considers it to be a function as printf(..) where 2 is considered an identifier as printf.

