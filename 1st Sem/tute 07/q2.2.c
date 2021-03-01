#include <stdio.h>

int main(void)
{

    int marks01; //array of 1 module marks
    int marks02; //array of 2 module marks
    int marks03; //array of 3 module marks
    int marks04; //array of 4 module marks

    int total = 0; //declaration and initialize total variable

    for (int i = 1; i <= 3; ++i)
    {
        printf("Student %d : \n", i);

        printf("Enter module marks 01:"); //display message to tell input module 01 marks

        scanf("%d", &marks01); //store user input mark 01 to array elements

        printf("Enter module marks 02:"); //display message to tell input module 02 marks

        scanf("%d", &marks02); //store user input mark 02 to array elements

        printf("Enter module marks 03:"); //display message to tell input module 03 marks

        scanf("%d", &marks03); //store user input mark 03 to array elements

        printf("Enter module marks 04:"); //display message to tell input module 04 marks

        scanf("%d", &marks04); //store user input mark 04 to array elements


        total = marks01 + marks02 + marks03 + marks04 ; // calculate all marks of total by sum each module marks

        printf("Total Marks is : %d\n", total); // display total marks

        total = 0;

    }

    return 0;

}
