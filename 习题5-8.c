#include<stdio.h>
int main()
{
    int number,huns,tens,units;
    printf("水仙花数有:\n");
    for(number = 100;number <= 999;number++)
    {huns = number / 100;
     tens = number % 100 / 10;
     units = number % 100 % 10;
     if(huns * huns * huns + tens * tens * tens + units * units * units == number)
     printf("%d ",number);
    } 
    return 0;
}
                                                                                