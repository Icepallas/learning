#include<stdio.h>
#include<math.h>
int main()
{   int a;
    double x1,x2;
    printf("enter a=");
    scanf("%d",&a);
    x2 = a;
    while(fabs(x2-x1) >= 1e-5)
    {x1 = x2;
     x2 = (x1 + a/x1)/2;
    }
    printf("x1=%.10lf,x2=%.10lf",x1,x2);
    return 0;
}
