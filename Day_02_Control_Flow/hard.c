#include <stdio.h>
#include <math.h>

void armstrong(int n) {
    int i = 0, rem = 0, sum = 0;

    int original_n = n;
    int original_n2 = n;

    do {
        rem = n % 10;
        i+= 1;
        n /= 10;
    } while(n != 0);
    
    while (original_n != 0) {
        rem = original_n % 10;
        sum = sum + round(pow(rem, i));
        original_n /= 10;
    }

    if((int)sum == original_n2) {
        printf("The number is an armstrong.\n");
        printf("\n------------------\n");
    } else {
        printf("The number is not an armstrong.\n");  
        printf("\n------------------\n");
    }
}


void palindrome(int num) {
    // Standard rule: Negative numbers are not palindromes
    if (num < 0) {
        printf("The number is not a palindrome.\n");
        printf("\n------------------\n");
        return;
    }

    int rem = 0, reverse = 0; 
    int original_num = num;

    do{
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    } while(num != 0);

    if(reverse == original_num) {
        printf("The number is a palindrome.\n");
        printf("\n------------------\n");
    } else {
        printf("The number is a not a palindrome.\n");
        printf("\n------------------\n");
    }
}

int main()
{
int n, num, choice = 0;

    do{
        printf("Calculations :- \n");
        printf("1. Armstrong\n");
        printf("2. Palindrome\n");
        printf("3. Exit\n");
        printf("Enter your choice :- ");
        scanf(" %d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter  an integer plz : ");
            scanf("%d", &n);

            // to write code that determines if a given number is equal to the sum of its own digits, each raised to the power of the total number of digits
            armstrong(n);
            break;

        case 2: 
            printf("Enter  an integer plz : ");
            scanf("%d", &num);

            palindrome(num);
            break;
        
        case 3:
            printf("Exiting the program. Goodbye !!");
            printf("\n------------------\n");
            break;
        
        default:
            printf("Invalid choice !");
            printf("\n------------------\n");
            break;
        }

    } while (choice != 3);
    
    return 0;
}
