#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char num[50];
int main()
{   
    void Arab();
    void Roman();
    int s=0;
    printf("��������������İ��������ֻ���������[1,4000)\n");
    scanf("%s",num);
    if(num[0]>='0'&&num[0]<='9')
          Arab();
    else Roman();
    system("pause");
    return 0;
}
void Arab()                           //����������ת��Ϊ��������
{   int check;
    for(check=0;check<strlen(num);check++)
    {if(check<strlen(num)-1 && ( num[check]-num[check+1]>10 || num[check]-num[check+1]<-10 )) //�ж������Ƿ�Ϊ������������
     {printf("���������������\n");return;}
     else 
     {int n=0;
      char* thousand[4]={" ","M","MM","MMM"};
      char* hundred[10]={" ","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
      char* ten[10]={" ","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
      char* dight[10]={" ","I","II","III","IV","V","VI","VII","VIII","IX"}; 
      n=atoi(num);
      if(n>0&&n<4000)  
       {printf("���Ӧ����������Ϊ");
        printf("%s",thousand[n/1000]);
        printf("%s",hundred[n%1000/100]);
        printf("%s",ten[n%100/10]);
        printf("%s\n",dight[n%10]);
       }
      else printf("����������ֲ���[1,4000)��Χ��\n");
      break; 
     }
    }      
}
void Roman()                         //��������ת��Ϊ����������
{   int code[256]; 
    int mark;
    for(mark=0;mark<256;mark++)      
    code[mark]=-1;                  //��code������Ԫ�ر�ǳ�-1������ִ������Ĵ���󣬷��������ֶ���-1��������������Ϊ���Ӧֵ
    code['I']=1;
    code['V']=5;
    code['X']=10;
    code['L']=50;
    code['C']=100;
    code['D']=500;
    code['M']=1000;    
    int i=0;
    int sum=0;    
    if(num[0]>='A'&&num[0]<='Z')   //�ж��Ƿ�Ϊ��д��ĸ
       { for(;i<strlen(num);i++)
         { if(code[num[i]]==-1)    //�ж��Ƿ�Ϊ����������
           {printf("���������������\n");return;}
           if(code[num[i]]<code[num[i+1]])
           {
           sum+=code[num[i+1]]-code[num[i]];
           i++;
           }
          else sum+=code[num[i]]; 
         }
        if(sum>0&&sum<4000) 
        {printf("���Ӧ�İ���������Ϊ");
         printf("%d\n",sum);        
        }
        else printf("��������������ֲ��ڶ�Ӧ��[1,4000)��Χ��\n");
       }
    else printf("���������������\n");
}

        