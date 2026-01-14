
// 3. Write a program to input radius of a circle and print its area (Take π = 3.14) 


#include <stdio.h>
#include <math.h>

int main()
{
    float r;

    printf("Enter the radius :\n");
    scanf("%f", &r);
    
    printf("Area of circle : %.2f\n", 3.14 * pow(r, 2));

    return 0;
}

// look we didn't use 3.14*(r**2) as the exponential operator ** doesn't exist in C.
// instead in C we can use :- 
//      1) 3.14 * r * r  
//              or 
//      2) 3.14 * pow(r, 2) - but this will require the math.h library.


