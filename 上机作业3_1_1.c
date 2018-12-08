//ֵ����ʵ�־���ת��
#include<stdio.h>
int main()
{
	int mt1[4][4] = { 0 };
	int mt2[4][4] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		printf("Please enter the line %d of the martrix, the format is \"a b c\"\n", i+1);
		scanf_s("%d %d %d", &mt1[i][0], &mt1[i][1], &mt1[i][2]);
	}
	printf("\nHere is the transport martrix.\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mt2[i][j] = mt1[j][i];
			printf("%3d", mt2[i][j]);
		}
		printf("\n");
	}
	return 0;
}