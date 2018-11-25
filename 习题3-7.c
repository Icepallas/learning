#include<stdio.h>
int main()
{
    double r,h,C,Sc,Ss,Vs,Vc,pai;
    pai=3.14;
    printf("请输入圆半径和圆柱的高，格式为r,h\n");
    scanf("%lf,%lf",&r,&h);
    C=2*pai*r;
    Sc=pai*r*r;
    Ss=4*pai*r*r;
    Vs=4*pai*r*r*r/3;
    Vc=Sc*h;    
    if(Vc!=0)
    {printf("圆周长为%.2lf\n",C);
     printf("圆面积为%.2lf\n",Sc);
     printf("圆球表面积为%.2lf\n",Ss);
     printf("圆球体积为%.2lf\n",Vs);
     printf("圆柱体积为%.2lf\n",Vc);
    }
    else printf("所输入的数据有误");
    return 0;
}
