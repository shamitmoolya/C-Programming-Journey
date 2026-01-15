
// 1. Write a program to input three integers and print their average.


#include <stdio.h>

int main()
{
    int a, b, c;

    printf("FINDING AVERAGE\n");

    printf("Enter three integers :\n");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("Average : %.2f\n", ((float) (a + b + c) / 3 ));

    // We could have also done this to convert the average into floating point numbers :-

        // ((a + b + c) / 3.0)  - Implicit conversion
        // instead of ((float) (a + b + c) / 3 )  - Type Casting 

        // But type casting is universally usable and hence most advisible.

    return 0;
}





