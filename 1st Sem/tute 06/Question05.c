#include <stdio.h>

int main(void)
{
    char grade;
    
    printf("Input the Grade : ");
    
    scanf("%c",&grade);
    
    
    switch(grade){
        case 'A':
        
        puts("Excellent");
        
        break;
        
        case 'B':
        
        puts("Excellent");
        
        break;
        
        case 'C':
        
        puts("Excellent");
        
        break;
        
        case 'F':
        
        puts("Excellent");
        
        break;
        
         case 'a':
         
        puts("Excellent");
        
        break;
        
        case 'b':
        
        puts("Good");
        
        break;
        
        case 'c':
        
        puts("Satisfactory");
        
        break;
        
        case 'f':
        
        puts("Needs Improvement");
        
        break;
        
        default:
        
        printf("Invalid Grade");
        
    }
    
    /*if(grade == 'A' || grade == 'a'){
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
    */

    return 0;
}
