
/* 1) Take input:
        name (string), age (int), cgpa (float)
        Print in this exact format:

        Name: ___
        Age: ___
        CGPA: __.__


    2) Take input of two float numbers and print:

        Sum = __.__
        Difference = __.__


    3) Take one integer and print:

        Number = __
        Square = __
        Cube = __    */

#include <stdio.h>
#include <string.h>

int main() {
    //1
    {
        char name[50];   // Character array to store the name
        int age;
        float cgpa;

        printf("Enter your name : ");
        fgets(name, 50, stdin);    // fgets(variable, size, stream)
        // Optional: Remove the newline character added by fgets
        name[strcspn(name, "\n")] = 0;

        printf("Enter your age : ");
        scanf("%d", &age);
        
        printf("Enter your cgpa : ");
        scanf("%f", &cgpa);

        printf("\n");
        printf("Name: %s\n", name);
        printf("Age: %d\n", age);
        printf("CGPA: %.2f\n\n", cgpa);
    }

    //2
    {
        float a, b, sum, diff;

        printf("Enter two numbers : ");
        scanf("%f %f", &a, &b);

        sum = a + b;
        diff = a - b;

        printf("Sum = %.2f\n", sum);
        printf("Difference = %.2f\n\n", diff);
    }
    
    //3
    {
        int a, square, cube;

        printf("Enter an integer : ");
        scanf("%d", &a);

        square = a * a;
        cube = a * a * a;


        printf("\nNumber = %d\nSquare = %d\nCube = %d\n\n", a, square, cube);
    }

    return 0;
}
