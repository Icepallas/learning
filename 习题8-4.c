#include<stdio.h>
void inv(int *arr,int num,int inve)
{
    int temp;
    for(int i=0, j=num ; i<inve ; i++,j--)
    {
        temp = *(arr+i);
        *(arr+i) = *(arr+j-1);
        *(arr+j-1) = temp;
    }
}
int main()
{
    int array[50]={0};
    int *p=array,n,m=0;
    printf("Please enter the number of integers you want to enter(less than 50):");
    scanf("%d",&n);
    for(int i=0;i<n;i++,p++)
    {
      printf("Please enter the number %d integer.\n",i+1);
      scanf("%d",p);
    }
    p = array;
    printf("Here are the integers you enter:\n");
    for(int i=0;i<n;i++,p++)
      printf("%d ",*p);
    p = array;
    printf("\nPlease enter the number you want your array to inverse(at most %d):",(n+1)/2);
    scanf("%d",&m);
    while(m>(n+1)/2)
    {
        printf("Error,the number you entered is more than %d.\n",(n+1)/2);
        printf("\nPlease enter the number you want your array to inverse again(at most %d):",(n+1)/2);
        scanf("%d",&m);
    }
    inv(array,n,m);
    printf("Here are the inversed integers:\n");
    for(int i=0 ; i<n ; i++, p++)
      printf("%d ",*p);
    return 0;
}
