#include <stdio.h>

void display(int x);

int main() {

    int x;

    printf("Input an Integer :");

    scanf("%d", &x);

    display(x);

    return 0;

}

void display(int x) {

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            printf("*");
        }
        printf("\n");
    }

}
