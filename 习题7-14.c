#include<stdio.h>
#include<string.h>
int Aver_stu[10] = { 0 };
void aver_student(int score[10][5])
{
	int sum = 0, i = 0;
	for (int j = 0; j < 10; j++)
	{
		for (i = 0, sum = 0; i < 5; i++)
			sum = sum + score[j][i];
		printf("Studnet %d's average score is %d.\n", j + 1, sum / 5);
		Aver_stu[j] = sum/5;
	}
}

void aver_subject(int score[10][5])
{
	int sum = 0, i = 0;
	for (int j = 0; j < 5; j++)
	{
		for (i = 0, sum = 0; i < 10; i++)
			sum = sum + score[i][j];
		printf("Subject %d's average score is %d.\n", j + 1, sum / 10);
	}
}
void best(int score[10][5])
{
	int max_stu = 0, max_sub = 0, max = 0;
	for (int j = 0; j < 10; j++)
		for (int i = 0; i < 5; i++)
		{
			if (max < score[j][i])
			{
				max = score[j][i];
				max_stu = j + 1;
				max_sub = i + 1;
			}
		}
	printf("The highest score is %d from student %d , subject %d\n", max ,max_stu, max_sub);
}

void var()
{
	float vari=0.,add1=0.,add2=0.;
	for (int i = 0; i < 10; i++)
	{
		add1 = add1 + Aver_stu[i] * Aver_stu[i];
		add2 = add2 + Aver_stu[i];
	}
	vari = add1 / 10 - (add2 / 10)*(add2 / 10);
	printf("The variance of average score is %.2f\n", vari);
}
int main()
{
	int score[10][5] = { 0 },i;
	for (i = 0; i < 10; i++)
	{
		printf("Please enter student %d's score.\n", i+1);
		scanf_s("%d %d %d %d %d", &score[i][0], &score[i][1], &score[i][2], &score[i][3], &score[i][4]);
	}
	aver_student(score);
	printf("\n");
	aver_subject(score);
	printf("\n");
	best(score);
	printf("\n");
	var();
	return 0;
}