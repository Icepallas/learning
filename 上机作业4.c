#include<stdio.h>
void check(int*p)
{
    int money = 0, d;
    for (int i = 0; i < 4; i++, p += 3)
    {
        d = 0;
        printf("The ticket price of %d is ", *p);
        if(*p==2020){                    //whether it is leap year
            d++;
        }
        d = d + 1 + (28 - *(p + 2));    //Calculate the date between Spring Festival and 1st March
        if(*(p+1)==1){
            d += 28 + 2;
        }
        if(d<15){
            money = 300 + d * 80;
        }
        else if(d>=15 && d<=19){
            money = 1500;
        }
        else if(d>=20 && d<35){
            money = 1500 - (d - 19) * 80;
        }
        else{
            money = 300;
        }
        printf("%d yuan.\n", money);
    }
}
int main()
{
    int dat[12] = {2019, 2, 5, 2020, 1, 25, 2021, 2, 12, 2022, 2, 1};
    int *pointer = dat;
    check(pointer);
    return 0;
}
