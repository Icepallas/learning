#include<stdio.h>
int main()
{
    const int unit=100000;
    int I;
    double prize;
    printf("enter I:");
    scanf("%d",&I);
    prize=unit*0.1;
    if(I>unit) 
    {   if(I<=2*unit) prize=prize + (I-unit)*0.075;
        else
        {prize= prize + unit*0.075;
         switch(I/(2*unit))
         {case 1:prize = prize+(I-2*unit)*0.05;break;
          case 2:prize = prize+2*unit*0.05+(I-4*unit)*0.03;break;
          case 3:prize = prize+2*unit*0.05+2*unit*0.03+(I-6*unit)*0.015;break;
          default:prize = prize+2*unit*0.05+2*unit*0.03+4*unit*0.015+(I-10*unit)*0.01;
         }
        }  
    } 
    printf("prize=%lf\n",prize);
    return 0;
}
