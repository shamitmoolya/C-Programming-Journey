#include <stdio.h>
#include <math.h>

int main()
{
    {
    //  1. Check if a number is even or odd

        int num;
        char junk[50];    // This will catch the ".5" or "abc" after a number
        char buffer[100];  //temporary space to store user input as string.

        printf("Enter a number: ");

        //fgets : reads entire line till enter from user input and stores it in buffer.
        if(fgets(buffer, sizeof(buffer), stdin) != NULL) {

            //tries to pull integer out of string
            //returns 1 if successful in finding integer
            //if it finds an integer followed by decimal and nos. then it'll return 2.
            if(sscanf(buffer, "%d %s", &num, junk) == 1) {
                if(num%2 == 0){
                    printf("The number is even!\n");
                }else{
                    printf("The number is odd.\n");
                }
            } else {
                //user entered a word instead of a number.
                printf("ERROR : You entered a word or float not a number !\n");
            }
        }

    }


    {
        // 2. Check if a number is positive, negative, zero
        int num;
        char buffer[100], junk[50];

        printf("Enter a number : ");
        if(fgets(buffer, sizeof(buffer), stdin) != NULL) 
        {
            if(sscanf(buffer, "%d" "%s", &num, junk) == 1) {

                if(num > 0){
                    printf("The number is Positive.\n");
                } else if(num < 0) {
                    printf("The number is Negative\n");
                } else {
                    printf("The number is 0.\n");
                }

            } else {
                printf("ERROR: Enter an integer please.\n");
            }
        }

    }


    {
        // 3. Find the largest of 3 numbers
        float a, b, c;
        char buffer[100];

        printf("Enter three numbers : ");
        if(fgets(buffer, sizeof(buffer), stdin) != NULL)
        {
            if(sscanf(buffer, "%f" "%f" "%f", &a, &b, &c) == 3) {

                if(a >= b && a >= c) {
                    printf("%.0f is the largest.\n", a);
                } else if(b >= a && b >= c) {
                    printf("%.2f is the largest.\n", b);
                } else {
                    printf("%.2f is the largest.\n", c);
                }

            } else {
                printf("Error : Please enter a number.\n");
            }
        }

    }


    {
        // 4. Check whether a number is prime or not
        int num, isPrime = 1;
        char buffer[100], junk[50];

        printf("Enter a number : ");
        if(fgets(buffer, sizeof(buffer), stdin) != NULL) 
        {
            if(sscanf(buffer, "%d" "%s", &num, junk) == 1) {

                if(num <= 1) {
                    isPrime = 0;
                } else {
                    for(int i = 2; i <= sqrt(num); i++)
                    {
                        if(num % i == 0){
                            isPrime = 0;
                            break;
                        }
                    }
                }

                if(isPrime) {
                    printf("The number is Prime.\n");
                } else {
                    printf("The number is not prime.\n");
                }

            } else {
                printf("Invalid input, not an integer.\n");
                return 1;
            }
        }

    }

    return 0;

}