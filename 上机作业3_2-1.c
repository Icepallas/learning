#include<stdio.h>
float Result[5];
int main()
{
	void Sort(float relt[5]);
	void Score(float score[5][4]);
	float score[5][4];
	for (int i = 0; i < 5; i++)
	{
		printf("Please enter student %d's score. The format is 'a b c d'\n", i + 1);
		scanf_s("%f %f %f %f", &score[i][0], &score[i][1], &score[i][2], &score[i][3]);
	}
	Score(score);
	for (int i = 0; i < 5; i++)
		printf("\nThe student %d's overall score is %f.\n", i + 1, Result[i]);
	Sort(Result);
	printf("\nThe results of students is sorted.\n");
	for (int i = 0; i < 5; i++)
		printf("%4.2f  ",Result[i]);
	return 0;
}