//
// Created by Madhusha Prasad on 8/8/2020.
//

#include <stdio.h>

int main(void) {
    int n;
    int sum;

    printf("Input Value :");
    scanf("%i", &n);

    for (int i = 1; i <= sizeof(n); ++i) {
        sum = n * (n + 1) * 0.5;
        printf("%i+", i);
    }
    printf("\b\nsum of series is : %i", sum);

    return 0;
}
