#include<stdio.h>
int main()
{
    int num[10][10];
    int i,j;
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(i<2 || j==0 || j==i) num[i][j] = 1;
            else num[i][j] = num[i-1][j-1] + num[i-1][j];
            printf("%4d",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}
