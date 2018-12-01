#include<stdio.h>
#include<string.h>
char str2[50];
void vowel(char letr)
{   static int j=0;
    if(letr == 'A'||letr == 'E'||letr == 'I'||letr == 'O'||letr == 'U'||
       letr == 'a'||letr == 'e'||letr == 'i'||letr == 'o'||letr == 'u') 
    {
        str2[j] = letr;
        j++;
    }
}
int main()
{
    char str1[50];
    printf("please enter a sentence.\n");
    gets(str1);
    printf("The vowel(s) included in the sentence are:\n");
    for(int i=0; i<strlen(str1);i++)
    {
        vowel(str1[i]);
    }
    puts(str2);
    return 0;
}
