//
// Created by Madhusha Prasad on 8/8/2020.
//

#include <stdio.h>

int main(void) {

    float weight;
    float BMI;
    float height;

    printf("Input Weight :");
    scanf("%f", &weight);

    printf("Input Height with meters :");
    scanf("%f", &height);

    BMI = weight / height * height;

    printf("Your Body Mass Index is : %.2f", BMI);

    return 0;
}
