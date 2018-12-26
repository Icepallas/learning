#include<stdio.h>
int fun(int num[])
{
	int *p1 = num, *p2 = num, k = 0;
	for (int i = 0; i < 1000; i++,p1++) {
		if ((*p1 % 7 == 0 && *p1 % 11 != 0) || (*p1 % 11 == 0 && *p1 % 7 != 0)) {
			*p2 = *p1;
			p2++;
			k++;
		}
	}
	return k;
}
int main()
{
	int m = 0, n = 1;
	int number[1000] = { 0 };
	for (int i = 0; i < 1000; i++) {     //赋值
		number[i] = i + 1;
	}
	m = fun(number);
	for (int i = 0; i<m; i++, n++) {
		if ((number[i] % 7 == 0 && number[i] % 11 != 0) || (number[i] % 11 == 0 && number[i] % 7 != 0))
		printf("%4d ", number[i]);
		if (n == 10) {
			printf("\n");
			n = 0;
		}
	}
	printf("\nThe numbers of the required are %d.", m);
	return 0;
}

