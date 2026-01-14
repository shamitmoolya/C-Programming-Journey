
/* 4. Write a program to input:

    roll number
    marks

and display them in this format:

    Roll No: ___
    Marks: ___      */

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the roll number :\n");
    scanf("%d", &a);

    printf("Enter the marks :\n");
    scanf("%d", &b);

    printf("Roll No : %d \nMarks : %d", a, b);

    return 0;
}

/*printf("\n"): Moves the cursor to the next line (Outputs data).
scanf("\n"): Tells the program to wait for the user to type something non-blank (Inputs data). 
Stick to scanf("%d", &a); for a smooth user experience.

you should avoid using \n inside a scanf format string because of how the function interprets whitespace. 

The Technical Reason
When you use scanf("%d\n", &a);, the \n tells scanf to read and discard all consecutive whitespace characters (newlines, spaces, or tabs) until it encounters the next non-whitespace character. 
The Trap: After you type your roll number and hit Enter, scanf sees that newline but keeps waiting. It thinks, "I need to skip every space and newline until I see a new actual value."
The Result: The program will appear to "hang" or get stuck. It will not move to the next printf until you type another character or number to satisfy that \n instruction. 

Why your current code is correct
The standard %d format specifier automatically skips leading whitespace. 
When you use scanf("%d", &b); for the marks, it automatically ignores the Enter key (newline) you pressed after entering the roll number.
Adding your own \n inside scanf creates a "greedy" search for whitespace that forces the user to provide extra input just to break the loop.*/

