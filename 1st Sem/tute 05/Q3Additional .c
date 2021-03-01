//
// Created by Madhusha Prasad on 8/8/2020.
//

#include <stdio.h>

int main(void) {

    float interest;
    float principal;
    float rate;
    int days;

    printf("Input Principal :");
    scanf("%f", &principal);

    printf("\nInput rate :");
    scanf("%f", &rate);

    printf("\nInput Days :");
    scanf("%i", &days);

    interest = principal * rate / 100 * days / 365;

    printf("\nSimple interest is : %f", interest);

    return 0;
}
