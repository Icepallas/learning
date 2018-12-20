#include<stdio.h>
int strcmp(char *p1,char *p2)
{
    int i;
    i=0;
    while( *(p1+i)==*(p2+i) )
      if( *(p1 + i++)=='\0')
        return 0;
    return( *(p1+i) - *(p2+i) );
}
int main()
{
    int rult;
    char str1[50]={0},str2[50]={0},*p1,*p2;
    printf("Please enter two strings you want to compare:\n");
    gets(str1);
    gets(str2);
    p1=str1;
    p2=str2;
    rult=strcmp(p1,p2);
    printf("Here is the result:%d\n",rult);
    return 0;
}
