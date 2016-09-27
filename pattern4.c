#include<stdio.h>
int main()
{
    int i,j,k,l,m;
       for(i=1; i<=6; i++)
       {
           if(i<=4)
         {
           for(j=4; j>=i; j--) printf(" ");

           for(k=1; k<=i; k++) printf("o ");

           if(i==1) printf("    ");
           else if(i==2) printf("  ");
           else {};

           for(k=1; k<=i; ++k)
            {
                printf("o ");
                if(i==4&&k==1){k++;}
            }
         }

         else if(i>4&&i<=6)
         {
             for(j=3; j<i; j++) printf(" ");
             for(k=7; k>=i; k--) printf("o ");
             if(i==6) printf("  ");
             for(k=7; k>=i; k--) printf("o ");
         }
         printf("\n");
       }

         for(i=1; i<=7; i++)
       {
           if(i<=4)
         {
           for(j=4; j>=i; j--) printf(" ");

           for(k=1; k<=i; k++) printf("o ");

           if(i==1) printf("    ");
           else if(i==2) printf("  ");
           else {};
           for(k=1; k<=i; k++)
           {
               printf("o ");
               if(i==4&&k==1){k++;}
           }
         }
         else if(i>4&&i<=7)
         {
             for(j=3; j<i; j++) printf(" ");
             for(k=7; k>=i; k--) printf("o ");
             if(i==6) printf("  ");
             else if(i==7) printf("    ");
             for(k=7; k>=i; k--) printf("o ");
         }
         printf("\n");
       }
}
