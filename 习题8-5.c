#include<stdio.h>
int main()
{
	int people[50] = { 0 },i,j,m,num;
	int *p=people;
	printf("Please enter the number of people(less than 50):");
	scanf("%d", &num);
    for(i=0;i<num;i++)
      *(p+i)=i+1;
    i=0;
    j=0;
    m=0;
    while(m<num-1)
    {
        if(*(p+i)!=0)
          j++;
        if(j==3)
        {
            *(p+i)=0;
            j=0;
            m++;
        }
        i++;
        if(i==num)
        i=0;
    }
    while(*p==0)
      p++;
	printf("The one who is left is the number %d.",*p);
	return 0;
}