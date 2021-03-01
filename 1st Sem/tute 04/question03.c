//
// Created by Madhusha Prasad on 8/1/2020.
//

#include <stdio.h>

int main(void) {

    //    Question 03
    //    answer
    int num, num02, total;

    printf("%s", "Input Number 01 : ");
    scanf("%i", &num);

    printf("%s", "\bInput Number 02 : ");
    scanf("%i", &num02);

    total = num + num02;
    printf("\bTotal is: %i", total);

    return 0;
}