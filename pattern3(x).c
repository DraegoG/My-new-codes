#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1; i<=7; i++)
    {
        if(i<4)
        {
            for(j=1; j<=i; j++)
                {
                    printf(" ");
                }
            printf("o");
            for(k=1; k<=7-(2*i); k++)
                {
                    printf(" ");
                }
                    printf("o");
            printf("\n");
        }

        else if(i==4) printf("    o\n");

        else
        {
              for(j=0; j<=(7-i); j++)
                {
                    printf(" ");
                }
            printf("o");
            for(k=1; k<=i-(j+1); k++)
                {
                    printf(" ");
                }
            printf("o");
            printf("\n");
        }
    }
}
