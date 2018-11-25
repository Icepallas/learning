#include<stdio.h>
int main()
{
    double mole = 2,deno = 1,sum=0,temp=0;
    for(int i=1;i<=20;i++)
    {sum = sum + mole / deno;
     temp = mole;
     mole = mole + deno;
     deno = temp;
    }
    printf("sum=%lf\n",sum);
    return 0;
}