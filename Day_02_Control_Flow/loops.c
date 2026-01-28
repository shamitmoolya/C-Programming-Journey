#include <stdio.h>
#include <string.h>

void factorial(int n);
void sum(int n);
void reverse(int n);
void count(int n);
void sum_digits(int n);


int main()
{
    char buffer[100], junk[50];
    int n;


    printf("Enter a number : ");

    if(fgets(buffer, sizeof(buffer), stdin) != NULL) {
        if(sscanf(buffer, "%d%s", &n, junk) == 1 && n >=0){
            factorial(n);
            sum(n);
            reverse(n);
            count(n);
            sum_digits(n);
        } else {
            printf("Enter a valid non-negative integer.\n");
        }

    }

    return 0;
}

// 5. Factorial of a number (using for loop)
void factorial(int n){

    if(n > 20) {
        printf("Number is too large for calculation\n");
    } else {
            
        unsigned long long fact = 1; // cuz factorials can be very long.

        // for n = 0 the doesn't ever run and fact remains 1
        for(int i = 1; i <= n; i++) {
            fact *= i;
        }
    
    printf("Factorial = %llu\n", fact);

    }
}


// 6. Sum of first N natural numbers
void sum(int n) {
    unsigned long long total;

    total = (unsigned long long)n * (n + 1) / 2;

    printf("Sum = %llu.\n", total);
}


// 7. Reverse a number (e.g., 123 → 321)
void reverse(int n) {
    int rev = 0, remainder = 0;

    while(n != 0 ) {

        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;

    }

    printf("Reverse = %d\n", rev);
}


// 8. Count digits in a number
void count(int n) {
    int rem = 0, i = 0;

    while(n != 0) {
        rem = n % 10;
        n /= 10;
        i += 1;
    }

    printf("The number of digits in the number is = %d\n", i);
}


// 9. Sum of digits of a number
void sum_digits(int n) {
    int sum=0, r=0;

    while (n != 0)
    {
        r = n % 10;
        n /= 10;
        sum += r;
    }
    
    printf("Sum of the digits = %d\n", sum);
}

