#include<stdio.h>
int main()
{
    int i=1, sum=1,total,n=10;
    for(i=1; i<=(n-1); i++)
    sum = 2*sum;
    total = 3*sum - 2;
    printf("total=%d",total);
    return 0;
}
