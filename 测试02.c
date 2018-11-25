#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char num[50];
int main()
{   
    void Arab();
    void Roman();
    int s=0;
    printf("请输入您想输入的阿拉伯数字或罗马数字[1,4000)\n");
    scanf("%s",num);
    if(num[0]>='0'&&num[0]<='9')
          Arab();
    else Roman();
    system("pause");
    return 0;
}
void Arab()                           //阿拉伯数字转换为罗马数字
{   int check;
    for(check=0;check<strlen(num);check++)
    {if(check<strlen(num)-1 && ( num[check]-num[check+1]>10 || num[check]-num[check+1]<-10 )) //判断数据是否为纯阿拉伯数字
     {printf("您输入的数据有误\n");return;}
     else 
     {int n=0;
      char* thousand[4]={" ","M","MM","MMM"};
      char* hundred[10]={" ","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
      char* ten[10]={" ","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
      char* dight[10]={" ","I","II","III","IV","V","VI","VII","VIII","IX"}; 
      n=atoi(num);
      if(n>0&&n<4000)  
       {printf("其对应的罗马数字为");
        printf("%s",thousand[n/1000]);
        printf("%s",hundred[n%1000/100]);
        printf("%s",ten[n%100/10]);
        printf("%s\n",dight[n%10]);
       }
      else printf("您输入的数字不在[1,4000)范围内\n");
      break; 
     }
    }      
}
void Roman()                         //罗马数字转换为阿拉伯数字
{   int code[256]; 
    int mark;
    for(mark=0;mark<256;mark++)      
    code[mark]=-1;                  //将code里所有元素标记成-1，这样执行下面的代码后，非罗马数字都是-1，而罗马数字则为其对应值
    code['I']=1;
    code['V']=5;
    code['X']=10;
    code['L']=50;
    code['C']=100;
    code['D']=500;
    code['M']=1000;    
    int i=0;
    int sum=0;    
    if(num[0]>='A'&&num[0]<='Z')   //判断是否为大写字母
       { for(;i<strlen(num);i++)
         { if(code[num[i]]==-1)    //判断是否为纯罗马数字
           {printf("所输入的数据有误\n");return;}
           if(code[num[i]]<code[num[i+1]])
           {
           sum+=code[num[i+1]]-code[num[i]];
           i++;
           }
          else sum+=code[num[i]]; 
         }
        if(sum>0&&sum<4000) 
        {printf("其对应的阿拉伯数字为");
         printf("%d\n",sum);        
        }
        else printf("您输入的罗马数字不在对应的[1,4000)范围内\n");
       }
    else printf("所输入的数据有误\n");
}

        