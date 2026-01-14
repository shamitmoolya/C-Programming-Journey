
// Write a program to print your name, age, and city using one printf() statement.

#include <stdio.h>

int main() {

    char name[] = "Shamit Moolya";
    int age = 18;
    char city[] = "Mumbai";

    printf("Information :- \nName : %s\nAge : %d\nCity : %s\n", name, age, city);

    // We used name instead of &name as the array is itself the address of those characters in the string. 

    // We used an array of characters as string isn't a datatype in C. 

    return 0;
}

