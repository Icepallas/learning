#include<stdio.h>
int main()
{
    char c[5][9];
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=i+4;j++)
        {
            if(j<i) c[i][j] = ' ';
            else c[i][j] = '*';
            printf("%c",c[i][j]); 
        }
        printf("\n");
    }
    return 0;
}
