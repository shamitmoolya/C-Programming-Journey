// Write a program to input an integer and print it.

#include <stdio.h>

int main()
{
    int num;

    printf("Enter the integer :\n");
    scanf("%d", &num);

    printf("Your integer was %d.", num);

    return 0;
}


// MAXIMUM SIZE :-
// DATATYPE            BITS          MAX_SIZE     FORMAT SPECIFIER
// int	                32	         2 Billion	        %d
// unsigned int	        32	         4 Billion      	%u
// long long	        64	       9 Quintillion	   %lld
// unsigned long long	64	       18 Quintillion	   %llu

// We didn't use (long) as it can be useful in Linux, etc but doesn't work for Windows instead we can use (long long).