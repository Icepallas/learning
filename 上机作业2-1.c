#include<stdio.h>
int main()
{   
    int R=0,Y=0,B=0,W=0;
    char color;
    printf("please type the ball's color with R,Y,B or W for 20 times.\n");
    for(int i=1;i<=20;i++)
    {          
        scanf(" %c",&color);
        switch(color)
        {
            case'R':R++;break;
            case'Y':Y++;break;
            case'B':B++;break;
            case'W':W++;break;
            default:printf("You type the wrong color!\n");
        }
        printf("R=%d    Y=%d    B=%d    W=%d    ,%d time(s) left\n",R,Y,B,W,20-i);
    }
    return 0;
}
