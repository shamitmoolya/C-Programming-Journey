#include <stdio.h>

int main()
{
    //1
    {
        /* Write a C program to print:
        Hello World
        Welcome to C Programming   */

        printf("Hello World\n");
        printf("Welcome to C Programming\n");

    }

    //2
    {
        char name[] = "Shamit Moolya";
        int age = 18;
        char city[] = "Mumbai";

        printf("Information :- \nName : %s\nAge : %d\nCity : %s\n", name, age, city);

        // We used name instead of &name as the array is itself the address of those characters in the string. 

        // We used an array of characters as string isn't a datatype in C. 

    }

    //3
    {
        printf("Name: Amit \nAge: 18 \nCourse: BTech");

        // Escape sequence :- \n  

    }

    return 0; 
    
}


