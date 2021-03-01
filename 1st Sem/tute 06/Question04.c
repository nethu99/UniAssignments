#include <stdio.h>

int main()
{
    char grade;
    
    printf("Input the Grade : ");
    
    scanf("%c",&grade);
    
    if(grade == 'A' || grade == 'a'){
        puts("Excellent");
    }else if(grade == 'B' || grade ==  'b'){
        puts("Good");
    }else if(grade == 'C' || grade ==  'c'){
        puts("Satisfactory");
    }else if(grade == 'F' || grade == 'f'){
        puts("Needs Improvement");
    }else{
        puts("Invalid Grade");
    }
    

    return 0;
}