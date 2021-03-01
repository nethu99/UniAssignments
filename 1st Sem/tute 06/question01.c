#include <stdio.h>
int main (void){
    int number;
    printf("Input Number : ");
    scanf("%d",&number);
    if(number > 0){
        puts("number is positive");
    }else if(number < 0){
        puts("number is negative");
    }else{
        puts("number is zero");
    }
    return 0;
} 