#include<stdio.h>
int main()
{   char c[3][80]={""};
    int i,j,lwr=0,upr=0,num=0,space=0,otrs=0;
    for(i=0;i<=2;i++)
    {   printf("please enter the line %d of your passage which includes less than 80 characters.\n",i+1);
        gets(c[i]);
        for(j=0;j<=79;j++)
        {   
            if(c[i][j]!='\0')
            {if(c[i][j]>=65 && c[i][j]<=90) upr++;
             else if(c[i][j]>=97 && c[i][j]<=122) lwr++;
             else if(c[i][j]>=48 && c[i][j]<=57) num++;
             else if(c[i][j]==' ') space++;
             else otrs++;
            }
        }        
    }
    printf("The passage has %3d lowercase(s), %3d uppercase(s), %3d number(s), %3d space(s) and %3d other character(s).\n",
            lwr,upr,num,space,otrs);
    return 0;
}
