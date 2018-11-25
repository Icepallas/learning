#include<stdio.h>
int main()
{
    int i,j;
    double product=1,sum=0;
    for(i=1;i<=20;i++)
     {for(j=1;j<=i;j++)
      {product=product*j;}
      sum=sum+product;    
      product=1;
      j=1;
     }     
    printf("sum=%e\n",sum); 
    return 0;
}