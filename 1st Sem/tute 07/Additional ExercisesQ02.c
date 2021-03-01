#include <stdio.h>
#include <stdbool.h>

int main (void){

	int package;
	int distance;
	double totalAmount;
	char decision;
	bool a = true;

while(a){
	
	printf("Enter Package :");
	scanf("%d",&package);

	printf("Enter Distance :" );
	scanf("%d",&distance);

	if(package == 1){
	
		distance--;

		totalAmount = (distance * 175 )+150;

		printf("\n\bTotal Amount is :%.2f \n",totalAmount);

		printf("\nDo you have more customers:");
		scanf("%s",&decision);
		
		switch(decision){

			case 'n':
			case 'N':
				a = false;
				break;
			case 'y':
			case 'Y':
				a = true;
				break;
			default :
				break;
		}		

		

	}else if(package == 2){

		totalAmount = distance * 100 ;

		printf("\n\bTotal Amount is :%.2f\n",totalAmount);
		
		printf("\nDo you have more customers:");
		scanf("%s",&decision);
		
		switch(decision){

			case 'n':
			case 'N':
				a = false;
				break;
			case 'y':
			case 'Y':
				a = true;
				break;
			default :
				break;
		}
		

	}else if(package == 3){

		distance-- ;

		totalAmount = (distance * 150)+130;

		printf("\n\bTotal Amount is :%.2f \n",totalAmount);
		
		printf("\nDo you have more customers:");
		scanf("%s",&decision);
		
		switch(decision){

			case 'n':
			case 'N':
				a = false;
				break;
			case 'y':
			case 'Y':
				a = true;
				break;
			default :
				break;
		}
		

	}else if(package == 4){

		distance--;

		totalAmount = (distance * 130)+120;

		printf("\n\bTotal Amount is:%.2f \n",totalAmount);
		
		printf("\nDo you have more customers:");
		scanf("%s",&decision);
		
		switch(decision){

			case 'n':
			case 'N':
				a = false;
				break;
			case 'y':
			case 'Y':
				a = true;
				break;
			default :
				break;
		}

	}else{

		printf("Invalid Package Number\n");
		
		printf("\nDo you have more customers:");
		scanf("%s",&decision);
		
		switch(decision){

			case 'n':
			case 'N':
				a = false;
				break;
			case 'y':
			case 'Y':
				a = true;
				break;
			default :
				break;
		}
		

	}

}
	return 0;
}
