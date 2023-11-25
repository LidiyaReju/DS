#include<stdio.h>
void main()
 {
     int lim,i;
     printf("Enter the number of terms\n");
     scanf("%d",&lim);
     
   struct poly{
    int coeff,expo;
    }s[lim];
    printf("Enter the polynomial in descending order of their exponent\n");
    for(i=0;i<lim;i++)
    {
    printf("Enter the coefficient of %d term\n",i+1);
    scanf("%d",&s[i].coeff);
    printf("Enter the exponent of%d term\n",i+1);
    scanf("%d",&s[i].expo);
   
    }
   for(int i=0;i<lim;i++){
   
       printf("%d",s[i].coeff);
       printf("x");
       printf("^%d",s[i].expo);
       if(lim>0){
        printf("+");
        }
        }
        }
