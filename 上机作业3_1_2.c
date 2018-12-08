//地址传递实现矩阵转置
#include<stdio.h>
void transpose(char mt2[4][4])
{
	int t;
	for (int i = 0; i < 3; i++)
	{
		for (int j = i; j < 3 ; j++)
		{
			t = mt2[i][j];
			mt2[i][j] = mt2[j][i];
			mt2[j][i] = t;
		}
	}
}
int main()
{
	char mt[4][4] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		printf("Please enter the line %d of the martrix, the format is \"a b c\"\n", i + 1);
		scanf_s("%d %d %d", &mt[i][0], &mt[i][1], &mt[i][2]);
	}
	printf("\nHere is the transport martrix.\n");
	transpose(mt);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%3d", mt[i][j]);
		printf("\n");
	}
	return 0;
}