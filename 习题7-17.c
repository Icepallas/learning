#include<stdio.h>
#include<string.h>
void tran(int x)
{
	if (x == 0) return;
	int num = x % 10;
	if (num != 0)
		tran(x / 10);
	putchar(num + '0');
}
int main()
{
	int n;
	printf("Please enter a integer.\n");
	scanf_s("%d", &n);
	if (n < 0)
	{
		printf("-");
		n = n * (-1);
	}
	tran(n);
	if (n == 0) putchar(n + '0');
	return 0;
}