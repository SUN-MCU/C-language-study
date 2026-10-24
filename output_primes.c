#include<stdio.h>
int main(){
   int a=0;
   int b=0;
   int c=2;
   printf("Please enter a number:");
   scanf("%d",&a);
   printf("Prime numbers less than %d:",a);
   for ( b = 2; b < a; b++)
   {
    int d=1;
    for ( c = 2; c*c <=b; c++)
    {
        if (b%c==0)
        {
            d =0;
            break;
        }
    }
    if (d==1)
        {
            printf(" %d",b);
         }
    }
    return 0;
}