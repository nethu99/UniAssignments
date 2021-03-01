#include <stdio.h>

int main(void)
{
    int employeeCategory;
    
    float eBSalary;
    
    float bonusAmount;
    
    printf("Input the Employee category : ");
    
    scanf("%d",&employeeCategory);
    
    
    printf("Input the Employee basic salary : ");
    
    scanf("%f",&eBSalary);
    
    
    
    
    if(employeeCategory == 1){
        
       bonusAmount = eBSalary *5/100;
       
       printf( "Bonus amount is %0.2f",bonusAmount);
        
    }else if(employeeCategory == 2){
        
      bonusAmount = eBSalary *10/100*100;
      
      printf( "Bonus amount is %0.2f",bonusAmount);
       
    }else if(employeeCategory == 3){
        
      bonusAmount = eBSalary *15/100*100;
      
      printf( "Bonus amount is %0.2f",bonusAmount);
       
    }else{
        
        printf( "There is no any category like that");
        
    }

    return 0;
}
