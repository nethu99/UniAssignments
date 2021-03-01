//
// Created by Madhusha Prasad on 8/8/2020.
//

#include <stdio.h>

int main(void) {
    char dNumber[5];

    printf("Inputs one five-digit number :");
    scanf("%c", dNumber);

    printf("%c\t", *dNumber);
    printf("\t%c", *dNumber + 1);
    printf("\t%c", *dNumber + 2);
    printf("\t%c", *dNumber + 3);
    printf("\t%c", *dNumber + 4);

    return 0;
}
