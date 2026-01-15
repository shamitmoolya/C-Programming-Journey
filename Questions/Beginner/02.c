
/*  1) Write a program to input temperature in Celsius and convert it to Fahrenheit.
    2) Take distance in kilometers and convert it into:
            meters
            centimeters
    3) Take total days and convert into:
            Years Months Days     
    4) Write a program to take total seconds as input and convert it into:
            Minutes
            Remaining Seconds  */



#include <stdio.h>

int main()
{
    //1
    {
        float temp_celsius, temp_fahrenheit;

        printf("TEMP. CELSIUS TO FAHRENHEIT :-\n");

        printf("Temperature in degree Celsius :\n");
        scanf("%f", &temp_celsius);

        temp_fahrenheit = ((float) ((temp_celsius * 9.0) / 5.0) + 32.0);

        printf("Temperature in deg fahrenheit : %.2f\n\n", temp_fahrenheit);
    }
    
    //2
    {
        float km, cm, mm;

        printf("Distance in kilometres : ");
        scanf("%f", &km);

        cm = km * 100;
        mm = km * 1000;

        printf("Distance (in cm) = %.2f cm\n", cm);
        printf("Distance (in mm) = %.2f mm\n\n", mm);
    }

    //3
    {
        int total_days, remaining_days, days, months, years;

        printf("Total number of days : ");
        scanf("%d", &total_days);

        // Whole years
        years = total_days / 365;
        // Remaining days
        remaining_days = total_days % 365;
        // Calculating the remaining months
        months = remaining_days / 30;
        // remaining days 
        days = remaining_days % 30;

        printf("%d days = %d Year(s) %d Month(s) and %d Day(s)\n\n", total_days, years, months, days);
    }

    //4
    {
        int seconds, minutes, remaining_seconds;

        printf("Total number of seconds : ");
        scanf("%d", &seconds);

        minutes = seconds / 60;
        remaining_seconds = seconds % 60;

        printf("%d seconds = %d minute(s) and %d second(s)", seconds, minutes, remaining_seconds);
    }

    return 0;
}

