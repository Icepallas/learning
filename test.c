#include<stdio.h>
#include<string.h>
int main()
{
	char str1[] = "abc",str2[]="cba";
	strcpy(str2, str1);
	puts(str2);
	return 0;
}