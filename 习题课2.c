#include<stdio.h>
int main()
{   
    int color;
    char ball[10]={0};
    char* bag[4]={"red","blue","yellow","white"};
    gets(ball);
    for ( int i = 1; i < strlen(ball); i++ )
    {
        color = ball[i];    
    }
    
    printf("请摸出一个球:");
    scanf("%s",&ball);
  
}