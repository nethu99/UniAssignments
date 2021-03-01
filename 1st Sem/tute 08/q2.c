#include <stdio.h>
#include <math.h>

void circleArea();

int main() {

    int areaRadius;

    printf("Input an area :");

    scanf("%d", &areaRadius);

    printf("Radius is :%d\n", areaRadius);

    circleArea(areaRadius);


}

void circleArea(int radius) {

    float result = 0;//create variable and initialize it as 0

    result = (22 / 7.0) * pow(radius, 2);//calculate results of the circle area

    printf("Area of The Circle is :%.2f", result); // display the Results
}
