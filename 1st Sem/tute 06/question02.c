#include <stdio.h>

int main(void) {

    int number;

    printf("Input Number : ");

    scanf("%d", &number);

    number = number % 2;

    if (number == 1) {

        puts("Number is an Odd number");

    } else {

        puts("Number is an an Even number");

    }

    return 0;

} 