//
// Created by Madhusha Prasad on 8/8/2020.
//

#include <stdio.h>

int main(void) {
    float radius;
    float diameter;
    float circumference;
    float area;

    printf("Input the radius : ");
    scanf("%f", &radius);

//    find diameter;

    diameter = radius * 2;

    printf("\bDiameter is : %.2f\n", diameter);

//    find area
    circumference = 2 * 22 / 7 * radius;

    printf("\bArea is : %.2f", circumference);

//    find circumference
    area = 2 * 22 / 7 * radius * radius;

    printf("\nCircumference is : %.2f", area);

    return 0;
}
