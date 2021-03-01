#include <stdio.h>

void display(int x, char ch);

int main() {

    int x;

    char ch = '#';

    printf("Input an Integer :");

    scanf("%d", &x);

    display(x, ch);

    return 0;

}

void display(int x, char ch) {

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            printf("%c", ch);
        }
        printf("\n");
    }

}
