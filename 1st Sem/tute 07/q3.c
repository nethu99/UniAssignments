#include <stdio.h>

int main(void)
{

    for(int i=1; i<=7; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");

    }

    for(int i=7; i>0; i--)
    {

        for(int j=1; j<=i; j++)

        {
            printf("*");
        }

        i -= 1;
        printf("\n");
    }


    return 0;

}
