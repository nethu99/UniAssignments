//
// Created by Madhusha Prasad on 8/1/2020.
//

#include <stdio.h>

int main (void){

//    Question 04
//    answer 02
    float balance, anInst;

    printf("%s", "Input your Balance : ");
    scanf("%f", &balance);


//    get annual interest from given balaence
    anInst = balance * 10 / 100;

//    process new balance by sum annual interest to balance
    balance = balance + anInst;
    printf("\bAnnual Interest is : %.2f\n", anInst);
    printf("\bNew Balance is : %.2f", balance);


    return 0;
}