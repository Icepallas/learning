#include<stdio.h>
#include<string.h>
int main()
{
    char* thousand[4]={" ","M","MM","MMM"};
    char* hundred[10]={" ","C","CC","CCC","CD","D","DC","DCC","DCCC","CCM","CM"};
    char* ten[10]={" ","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    char* dight[10]={" ","I","II","III","IV","V","VI","VII","VIII","IX"}; 
    char number[50];
    int code[256];   
    int sum=0;
    int n;
    n=(int)number;  
    int i1=0;
    printf("请输入您想输入的阿拉伯数字或罗马数字\n");
    scanf("%s",&number);
    for(; i1<=strlen(number);i1++)                           //判断所输入的字符串为阿拉伯数字还是罗马数字或者无效
     {
      if(number[i1]>'0'&&number[i1]<'9')                     
       continue;
      else
          if(number[i1]>'A'&&number[i1]<'Z') 
          else break;
       printf("您输入的数据有误");break;
     }
    if(i1==strlen(number)-1&&number[i1]>'0'&&number[i1]<'9') //阿拉伯数字转换为罗马数字
        printf("%s",thousand[n/1000]);
        printf("%s",hundred[n%1000/100]);
        printf("%s",ten[n%100/10]);
        printf("%s",dight[n%10]); 
    else break; 
    if(i1==strlen(number)-1&&number[i1]>'A'&&number[i1]<'Z') //罗马数字转换为阿拉伯数字
     
    return 0;
}