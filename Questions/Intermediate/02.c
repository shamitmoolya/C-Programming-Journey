
/* 2)  (1)Write a program to calculate simple interest using:

            SI = (P × R × T) / 100 

        (2) Take basic salary and calculate:

            HRA = 20% of basic
            DA = 50% of basic
            Gross Salary = basic + HRA + DA     */


#include <stdio.h>

int main()
{
    //1
    {
        float P, R, T, SI;

        printf("Enter the principal amount ( in Rs) :\n");
        scanf("%f", &P);

        printf("The annual interest rate as a percentage (%%) :\n");
        // To print %, we will use escape sequence which is %%. It is different from normal escape sequences containing \ like \n, \t etc.
        scanf("%f", &R);

        printf("Duration for which the money is lent (in yrs) :\n");
        scanf("%f", &T);

        SI = (P * R * T) / 100.0;

        printf("Simple Interest = %.2f\n\n", SI);
    }
    
    //2
    {
        float basic_salary, HRA, DA, gross_salary;

        printf("Basic salary : ");
        scanf("%f", &basic_salary);

        HRA = (20.0 * basic_salary) / 100.0;
        DA = (50.0 * basic_salary) / 100.0;
        gross_salary = basic_salary + HRA + DA;

        printf("\nHRA = %.2f\nDA = %.2f\ngross_salary = %.2f", HRA, DA, gross_salary);
    }

    return 0;
}



