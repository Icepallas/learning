#include<stdio.h>
int main()
{
    int Mt[3][3]={0,1,0},i=0,j=1,n,p,k;
    for(n=2;n<=9;n++) //给魔方阵赋值
    { p=i;
      k=j;
      if(i==0 && j!=2) {i=2; j++;}
      else if(j==2 && i!=0) {i--; j=0;}
      else if(i==0 && j==2) i++;
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
    for(i=0;i<=2;i++) //输出魔方阵
    { for(j=0;j<=2;j++)
      printf("%2d",Mt[i][j]);
      printf("\n");
    }
      return 0;
}