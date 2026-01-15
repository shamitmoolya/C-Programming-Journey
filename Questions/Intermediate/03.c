/* 1) Write a program that:

    Takes two integers as input
    Prints their sum

2) Write a program that:
    Takes two numbers
    Prints addition, subtraction, multiplication, division

3) Write a calculator that:
    Takes two float numbers
    Prints only their division result

4) Write a program to calculate:
        Result = (a + b) * c
    Take a, b, c as input.

5)Write a program to calculate the remainder when one number is divided by another     */

#include <stdio.h>

int main()
{
    // 1
    {
        printf("CALCULATOR 1 (SUM)\n");
        int a, b, sum;
        printf("Enter 1st integer: ");
        scanf("%d", &a);
        printf("Enter 2nd integer: ");
        scanf("%d", &b);
        sum = a + b;
        printf("Sum = %d\n\n", sum);
    }
    
    // 2
    {
        printf("CALCULATOR 2 (+-*/)\n");
        float num1, num2,sum, sub, mul, div;
        printf("1st number : ");
        scanf("%f", &num1);
        printf("2nd number : ");
        scanf("%f", &num2);
        sum = num1 + num2;
        sub = num1 - num2;
        mul = num1 * num2;
        div = num1 / num2;
        printf("Sum = %.2f\n", sum);
        printf("Subtraction = %.2f\n", sub);
        printf("Multiplication = %.2f\n", mul);
        printf("Division = %.2f\n\n", div);
    }
    
    // 3
    {
        printf("CALCULATOR 3 (DIVISION)\n");
        float a, b, div;
        printf("1st number : ");
        scanf("%f", &a);
        printf("2nd number : ");
        scanf("%f", &b);
        div = a / b;
        printf("Division = %.2f\n\n", div);
    }
    
    // 4
    {
        printf("CALCULATOR 4\n");
        float a, b, c, Result;
        printf("Enter three numbers : ");
        scanf("%f %f %f", &a, &b, &c);
        printf("Formula :- Result = (a + b) * c\n");
        Result = (a + b) * c;
        printf("Result = %.2f\n\n", Result);
    }
    
    // 5
    {
        printf("CALCULATOR 5 (REMAINDER)\n");
        int dividend, divisor, remainder;
        printf("Enter the dividend : ");
        scanf("%d", &dividend);
        printf("Enter the divisor : ");
        scanf("%d", &divisor);
        remainder = dividend % divisor;
        printf("Remainder = %d\n", remainder);
    }

    return 0;
}

// Learnt making blocks in this, thus making each calculator a different block with the variables within be limited to the local scope of the block and you can then use the same variable in the next block without interfernce since it doesn't have a global scope due to the block.

// or we could have even converted the sum variable in 1 to float type tyo use in 2nd calci but the integer takes less space and you can't expand this memory space to containt he decimal part too hence we used Block instead of Type Casting.

