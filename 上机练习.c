#include<stdio.h>
#include<math.h>
float eqa1(int x,int y,float d)
{ float r1;
  r1 = (-y + sqrt(d) )/(2*x);
  return r1;
}
float eqa2(int x,int y,float d)
{ float r1;
  r1 = (-y - sqrt(d) )/(2*x);
  return r1;
}
int main()
{
    int a,b,c;
    float delta,root1,root2;
    printf("enter integer number to a,b,c\n");
    scanf("%d,%d,%d",&a,&b,&c);
    delta = b*b - 4*a*c; 
    if (delta<0) {printf("no root");return 1;}
    else if(delta==0)
    {
      root1 = eqa1(a,b,delta);
      printf("The equation has two same roots which is %f.",root1);
      return 2;
    }
    else if(delta>0)
    {
        root1 = eqa1(a,b,delta);
        root2 = eqa2(a,b,delta);
        printf("The equation has two roots which are %f and %f.",root1,root2);
    }
    else printf("error!");
    return 0;
}
