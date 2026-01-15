
/*  1) Write a program to swap two numbers:
        Using a third variable   
    
    2) Take a 3-digit number and print:
        Sum of digits   
        
    3) Take marks of 3 subjects and print:
        Total Percentage    
        
    4) Take a 3-digit number and print:
        Reverse of the number                       */


#include <stdio.h>

int main()
{
    //1
    {
        int num1, num2, temp;

        printf("Enter 1st number :\n");
        scanf("%d", &num1);
        
        printf("Enter 2nd number :\n");
        scanf("%d", &num2);

        printf("Before swapping first = %d, second = %d\n", num1, num2);

        temp = num1;     //Assigns num1 to temp
        num1 = num2;     // Assigns num2 to num1
        num2 = temp;     // Assigns temp to num2

        printf("After swapping first = %d, second = %d\n\n", num1, num2);   
    }
    
    //2
    {
        int n, first_number, second_number, third_number, sum;

        printf("Enter a three digit number : ");
        scanf("%d", &n);

        first_number = n / 100;
        second_number = (n / 10) % 10;
        third_number = n % 10;
        sum = first_number + second_number + third_number;

        printf("Sum of the digits = %d\n\n", sum);
    }

    //3
    {
        int s1_marks, s2_marks, s3_marks, s1_total_marks, s2_total_marks, s3_total_marks, sum_marks, sum_total_marks;
        float total_percentage;

        printf("PERCENTAGE CALCULATION :-\n");
        printf("Subject 1 marks :- ");
        scanf("%d", &s1_marks);
        printf("Subject 1 total marks :- ");
        scanf("%d", &s1_total_marks);
        printf("Subject 2 marks :- ");
        scanf("%d", &s2_marks);
        printf("Subject 2 total marks :- ");
        scanf("%d", &s2_total_marks);
        printf("Subject 3 marks :- ");
        scanf("%d", &s3_marks);
        printf("Subject 3 total marks :- ");
        scanf("%d", &s3_total_marks);

        sum_marks = s1_marks + s2_marks + s3_marks;
        sum_total_marks = s1_total_marks + s2_total_marks + s3_total_marks;
        total_percentage = (float)(sum_marks * 100.0) / sum_total_marks;

        printf("Total Percentage :- %.2f\n\n", total_percentage);
    }

    //4 
    {
        int n, first_number, second_number, third_number, reverse;

        printf("Enter a three digit number :- ");
        scanf("%d", &n);

        first_number = n / 100;
        second_number = (n / 10) % 10;
        third_number = n % 10;
        reverse = first_number + (10 * second_number) + (100 * third_number);

        printf("Reverse number = %d", reverse);
    }

    return 0;
}

