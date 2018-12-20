#include<stdio.h>
void inve(int mt[3][3])
{
    int temp;
    for(int i=0;i<3;i++)
    {
        for(int j=i;j<3;j++)
        {
            temp = *( *(mt+i)+j );
            *( *(mt+i)+j ) = *( *(mt+j) +i);
            *( *(mt+j)+i ) = temp;
        }
    }
}
int main()
{
    int mt[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    inve(mt);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
          printf("%4d", *( *(mt+i)+j ) );
        printf("\n"); 
    }
    return 0;
}