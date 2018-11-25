#include<stdio.h>
int main()
{   int Matrix[5][5]={1};
    int i,j;
    for(i=0;i<=4;i++)
    { printf("*");
      for(j=0;j<=4;j++)
      { if(i==0&&j==0) {printf("\t%3d",Matrix[i][j]); continue;}
        if(j==0) Matrix[i][0] = Matrix[i-1][0] + 1;
        else if(i==0) Matrix[0][j] = Matrix[0][j-1] + 1;
        else
        Matrix[i][j] = Matrix[i-1][j] + Matrix[i][j-1];
        if(i==2 || j==2) printf("\t  *");
        else printf("\t%3d",Matrix[i][j]);
      }
      printf("\t*\n");
    }
    return 0;
}
