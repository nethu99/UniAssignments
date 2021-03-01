#include <stdio.h>

int main(void)
{
    char grade;
    
    printf("Input the Grade : ");
    
    scanf("%c",&grade);
    
    if(grade == 'A'){
        printf( "Excellent \n");
    }else if(grade == 'B'){
       printf("Good \n");
    }else if(grade == 'C'){
       printf( "OK \n");
    }else{
        printf( "Needs Improvement\n");
    }

    return 0;
}