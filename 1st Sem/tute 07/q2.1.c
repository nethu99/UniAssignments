#include <stdio.h>

int main(void) {

    int marks[4]; //array of 4 module marks

    int total = 0; //declaration and initialize total variable

    int count = 4; //counting variable declaration and initialize

    //loop 4 times for get 4 module
    while (count > 0) {

        printf("Enter module marks :"); //display message to tell input module marks

        scanf("%d", &marks[count]); //store user input marks to array elements

        total += marks[count]; //calculate each marks of sum and assign it to the total variable

        count--; //decrement count value

    }

    printf("Total Marks is : %d", total);

    return 0;

}
