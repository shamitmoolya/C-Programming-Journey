#include <stdio.h>

void pattern1(void) {

    for(int i = 1; i <= 4; i++){
        for(int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

}

void pattern2(void) {

    for(int i = 1; i <= 4; i++) {
        for(int j = 0; j < i; j++) {
            printf("%d", j+1);
        }
        printf("\n");
    }
}

void pattern3(void) {

    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= 5-i; j++) {
            printf("%d", j);
        }        printf("\n");
    }

}

void pattern4(void) {

for(int i = 1; i <= 4; i++) {
    for(int j = 0; j < 5-i; j++) {
        printf("*");
    }        printf("\n");
}

}

int main()
{

    printf("\nPattern 1:\n");
    pattern1();

    printf("\nPattern 2:\n");
    pattern2();

    printf("\nPattern 3:\n");
    pattern3();

    printf("\nPattern 4:\n");
    pattern4();

    return 0;
}

