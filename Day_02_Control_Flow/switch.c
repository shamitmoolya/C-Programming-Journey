#include <stdio.h>

void calculator(int a, int b) {
    int choice = 0, sum = 0, sub = 0, mul = 0;
    float div = 0;

        do{

        printf("Calculator: \n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Your choice : \n");
        scanf(" %d", &choice);   //give space before %d to consume any leftover newline character

        switch (choice)
        {
            case 1:
                sum = a + b;
                printf("%d + %d = %d\n\n", a, b, sum);
                break;

            case 2:
                sub = a - b;
                printf("%d - %d = %d\n\n", a, b, sub);
                break;
            
            case 3:
                mul = a * b;
                printf("%d * %d = %d\n\n", a, b, mul);
                break;

            case 4:
                if(b != 0 ) {
                    div = (float)a / b;
                    printf("%d / %d = %.2f\n\n", a, b, div);
                } else {
                    printf("Sorry, but you can't divide with zero.\n\n");
                }

                break;

            case 5:
                printf("Exiting the calculator. Goodbye !!\n\n");
                break;
                
            default:
                printf("Invalid entry. Try again !\n\n");
                break;
        }
    } while(choice != 5);

}

void day_calender(void) {

    int choice = 0;

    do{
        printf("Week Day Finder :\n");
        printf("Enter a number (1-7) to see the day, or 8 to Exit: \n");
        scanf(" %d", &choice);

        switch (choice)
        {
            case 1:
                printf("Day 1 --> Monday\n\n");
                break;

            case 2:
                printf("Day 2 --> Tuesday\n\n");
                break;

            case 3:
                printf("Day 3 --> Wednesday\n\n");
                break;

            case 4:
                printf("Day 4 --> Thursday\n\n");
                break;

            case 5:
                printf("Day 5 --> Friday\n\n");
                break;

            case 6:
                printf("Day 6 --> Saturday\n\n");
                break;

            case 7:
                printf("Day 7 --> Sunday\n\n");
                break;


            case 8:
                printf("Exiting the program. Goodbye !!\n\n");
                break;

            default:
                printf("Enter within the range 1 to 7 or 8 plzz..\n\n");
                break;
        }
    } while(choice != 8);
}

int main()
{

    int a, b;

    printf("Enter the 1st integer :");
    scanf("%d", &a);

    printf("Enter the 2nd integer :");
    scanf("%d", &b);

    calculator(a,b);

    printf("Welcome to week day calender: ");
    day_calender();
  
    return 0;
}


