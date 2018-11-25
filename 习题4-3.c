#include<stdio.h>
int main()
{
    int a=3,b=4,c=5,d,e,f,g,h,x,y;
    d=a+b>c&&b==c;
    e=a||b+c&&b-c;
    f=!(a>b)&&!c||1;
    g=!(x=a)&&(y=b)&&0;
    h=!(a+b)+c-1&&b+c/2;
    printf("%d %d %d %d %d",d,e,f,g,h);
    return 0;
}
