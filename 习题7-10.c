#include<stdio.h>
#include<string.h>
char str2[20][20];
void putlong(int word)
{  
	int cont1 = 0, cont2 = 0, max = 0;
	for (int j = 0; j <= 19; j++)
	{
		for (int i = 0; i<=19; i++)
		{
			if (str2[j][i] == ' ' || str2[j][i] == 0) break;
			cont2++;
		}
		if (str2[j][0] == 0) break;
		max = (cont2 > cont1) ? j : max;
	}
	for (int i = 0;i<=19; i++)
	{
		if (str2[max][i] == '.') break;
		printf("%c",str2[max][i]);
	}
}
int main()
{
	int cont = 0,word = 0;
	char str1[80];
	printf("please enter a sentence.\n");
	gets(str1);
	for (int i = 0; i < strlen(str1); i++)
	{
		if (str1[i] == ' ')
		{
			word++;
			cont = 0;
			continue;
		}
		str2[word][cont] = str1[i];
		cont++;
	}
	putlong(word);
	return 0;
}