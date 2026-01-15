
/* 3. Write a program to input a number and print:

    Square
    Cube    */


#include <stdio.h>
#include <math.h>

int main()
{
    float num;

    printf("Enter your number :\n");
    scanf("%f", &num);

    printf("Square : %.2f\n", pow(num, 2));
    printf("Cube : %.2f\n", pow(num, 3));

    return 0;
}


