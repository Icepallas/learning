#include<stdio.h>
int main()
{
    float x,y;
    printf("enter x,y\n");
    scanf("%f,%f",&x,&y);
    if((x-2)*(x-2)+(y-2)*(y-2)<=1) printf("Height is 10m");
    else if((x+2)*(x+2)+(y-2)*(y-2)<=1) printf("Height is 10m");
    else if((x-2)*(x-2)+(y+2)*(y+2)<=1) printf("Height is 10m");
    else if((x+2)*(x+2)+(y+2)*(y+2)<=1) printf("Height is 10m");
    else printf("Height is 0m");
    return 0;
}
