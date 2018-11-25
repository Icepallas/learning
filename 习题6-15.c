#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50]={"I am a boy.\0 And I'm a student."};
    memset(s1,'a',sizeof s1);
    int i;
    for(i=0;i<=strlen(s2);i++)
    {
        s1[i] = s2[i];
    }
    printf("%s\n",s1);
    printf("Now to check that it didn't copy the string after the \\0. \n",s1);
    s1[11]=' '; // To repalce the \0 by ' '
    printf("%s",s1);
    return 0;
}
