#include <stdio.h>
#include <math.h>

int add(int num0, int num02);

int multiply(int num0, int num02);

int square(int num);

int main() {

//    (3*4 + 5*7) 2

    int result01 = multiply(3, 4);// 3*4

    int result02 = multiply(5, 7);// + 5*7

    int result03 = add(result01, result02);// (3*4 + 5*7)

    int mainResult = square(result03);// (3*4 + 5*7) 2

    printf("Result is %d", mainResult);


}

int add(int num0, int num02) {
    int results = 0;

    results = num0 + num02;

    printf("Add Result is :%d\n", results);

    return results;

}

int multiply(int num0, int num02) {
    int results = 0;

    results = num0 * num02;

    printf("Multiply Result is :%d\n", results);

    return results;
}

int square(int num) {
    int results = 0;

    results = pow(num, 2);

    printf("Square Result is :%d\n", results);

    return results;
}
