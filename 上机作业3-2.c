#include<stdio.h>
int main()
{
    int Mt[5][5]={0,0,1},i=0,j=2,n,p,k;
    for(n=2;n<=25;n++) //给魔方阵赋值
    { p=i;
      k=j;
      if(i==0 && j!=4) {i=4; j++;}
      else if(j==4 && i!=0) {i--; j=0;}
      else if(i==0 && j==4) i++;
      else  
      {   i--;
          j++;         
      }   
      if(Mt[i][j]!=0)
      {
          i=p+1;
          j=k;
      }
      Mt[i][j] = n;         
    }
    for(i=0;i<=4;i++) //输出魔方阵
    { for(j=0;j<=4;j++)
      printf("%5d",Mt[i][j]);
      printf("\n");
    }
      return 0;
}
