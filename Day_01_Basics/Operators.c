#include <stdio.h>
#include <math.h>

int main()
{

    {
    /* 1. Write a program to input two integers and print:

    Sum
    Difference
    Product
    Quotient     */

        int a, b;

        printf("Enter the first number :\n");
        scanf("%d", &a);

        printf("Enter the second number :\n");
        scanf("%d", &b);

        printf("The sum : %d\n", a+b);
        printf("The difference : %d\n", a-b);
        printf("The product : %d\n", a*b);
        printf("The quotient : %d\n", a/b);

    }

    {
    /* 2. Write a program to input length and breadth of a rectangle and print:

    Area
    Perimeter   */

        float l, b;

        printf("Enter the length of rectangle :\n");
        scanf("%f", &l);

        printf("Enter the breadth of rectangle :\n");
        scanf("%f", &b);

        printf("Area : %.2f\n", l*b);
        printf("Perimeter : %.2f\n", 2*(l+b));

    // Note that we used 2*(l+b) instead of 2(l+b) as if we did it then the compiler considers it to be a function as printf(..) where 2 is considered an identifier as printf.

    }

    {
    // 3. Write a program to input radius of a circle and print its area (Take π = 3.14) 

        float r;

        printf("Enter the radius :\n");
        scanf("%f", &r);

        printf("Area of circle : %.2f\n", 3.14 * pow(r, 2));
        
    // look we didn't use 3.14*(r**2) as the exponential operator ** doesn't exist in C.
    // instead in C we can use :- 
    //      1) 3.14 * r * r  
    //              or 
    //      2) 3.14 * pow(r, 2) - but this will require the math.h library.
    }

    return 0;
    
}




