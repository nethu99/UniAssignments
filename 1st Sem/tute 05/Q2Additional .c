//
// Created by Madhusha Prasad on 8/8/2020.
//

#include <stdio.h>

int main(void) {

    float fares01;
    float fares02;
    float fares03;
    float sumOfFares;
    float eSFares;

    printf("Input fares of Bus 01 :");
    scanf("%f", &fares01);
    printf("Input fares of Bus 02 :");
    scanf("%f", &fares02);
    printf("Input fares of Bus 03 :");
    scanf("%f", &fares03);

    sumOfFares = fares01 + fares02 + fares03;

    eSFares = sumOfFares * 13 * 5;

    printf("Traveling expenditure of the student \nfor the entire semester : %f", eSFares);

}
