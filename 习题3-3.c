#include<stdio.h>
#include<math.h>
int main()
{
    double log();
    double d,p,r,m;
    d = 300000;
    p = 6000;
    r = 0.01;
    m = log(p/(p-d*r)) - log(1 + r);
    printf("贷款300000元需要%.1lf月还清",m);
    return 0;
}