
/* 1. Arithmetic + Expression Based

        1) Take three integers a, b, c and print the value of:
             (a + b)² + (b + c)²
        2) Take two integers and print:
             (a³ + b³)
        3) Take four integers and print their average (answer should be float).
        4) Take two numbers and print:
             (a + b) / (a - b)    */

#include <windows.h>
#include <stdio.h>
#include <math.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    // 1
    {
        int a, b, c, result;
        printf("Enter three integers : ");
        scanf("%d %d %d", &a, &b, &c);
        // result = (a + b) * (a + b) + (b + c) * (b + c);
        result = (int)round(pow(a+b,2) + pow(b+c,2));
        printf("(a+b)\u00B2 + (b+c)\u00B2 = %d\n\n", result); 
    }
    
    // 2
    {
        int a, b, result;
        printf("Enter two integers : ");
        scanf("%d %d", &a, &b);
        result = (a * a * a) + (b * b * b);
        printf("a\u00B3 + b\u00B3 = %d\n\n", result);
    }
    
    // 3
    {
        int a, b, c, d;
        float avg;
        printf("Enter four integers : ");
        scanf("%d %d %d %d", &a, &b, &c, &d);
        avg = (float)(a + b + c + d) / 4.0; 
        printf("Average = %.2f\n\n", avg);
    }

    // 4
    {
        float a, b, result;
        printf("Enter two numbers : ");
        scanf("%f %f", &a, &b);
        result = (a + b) / (a - b);
        printf("(a + b) / (a - b) = %.2f\n\n", result);
    }

    return 0;
}

// pow() function gives us answer in double type. On the other hand if you want this double type to get into int type result then it'll just cancel the decimal part and get int type. So to round it off instead of just cutting the decimal part we used round().
// or you could also use 
    // result = (a + b) * (a + b) + (b + c) * (b + c);
// as its direct multiplication with no approximation needed.

// don't use pow instead use (a*a*a) etc.

// \u00B3 for cube
// \u00B2 for square.

