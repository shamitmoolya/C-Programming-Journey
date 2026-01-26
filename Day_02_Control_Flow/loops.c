#include <stdio.h>

void factorial(int n);


int main()
{
    char buffer[100], junk[50];
    int n;

    printf("Enter a number : ");

    if(fgets(buffer, sizeof(buffer), stdin) != NULL) {
        if(sscanf(buffer, "%d%s", &n, junk) == 1 && n >=0){
            factorial(n);
        } else {
            printf("Enter a valid non-negative integer.");
        }

    }

    return 0;
}

// 5. Factorial of a number (using for loop)
void factorial(int n){
    unsigned long long fact = 1; // cuz factorials can be very long.

    // for n = 0 the doesn't ever run and fact remains 1
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    
    printf("Factorial = %llu\n", fact);
}


