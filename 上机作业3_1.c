#include<stdio.h>
#include<string.h>
int main()
{
    int mt1[3][3]={{8,1,9},{2,5,6},{1,8,9}};
    int mt2[3][3];
    for(int i=0;i<=2;i++)
    {
       for(int j=0;j<=2;j++)
       {
        mt2[i][j] = mt1[j][i];
        printf("%d",mt2[i][j]);
       }
     printf("\n");
    } 
    return 0;
}
