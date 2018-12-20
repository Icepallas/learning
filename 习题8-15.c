#include<stdio.h>
#include<string.h>
int Aver_stu[4] = { 0 };
void aver_student(int score[4][5])
{
	int sum = 0, i = 0;
	for (int j = 0; j < 4; j++)
	{
		for (i = 0, sum = 0; i < 5; i++)
			sum = sum + score[j][i];
		Aver_stu[j] = sum/5;
	}
}

void aver_subject(int score[4][5])
{
	int sum = 0, i = 0;
	for (int j = 0; j < 5; j++)
	{
		for (i = 0, sum = 0; i < 4; i++)
			sum = sum + score[i][j];
		printf("Subject %d's average score is %d.\n", j + 1, sum / 10);
	}
}
void fail(int (*p)[5],int n)
{
    int i,j,count=0,num=0,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            if(*(*(p+i)+j) < 60)
            count++;
        }
        if(count >= 2)
        {
            int sum=0,aver=0;
            printf("学号 ：%d\n",i+1 );
                printf("全部课程的成绩 ：");
            for(k=0;k<5;k++){
                printf("%3d ",*(*(p+i)+k) );
                sum += *(*(p+i)+k);
            }
            printf("\n");
            aver = sum/ 5;
            printf("平均分 ：%d\n",aver );
            printf("\n");
        }
        count = 0;
    }
}

void excellent(int (*p)[5],int n){
    int i,j,aver=0,sum=0;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            sum += *(*(p+i)+j);
        }
        aver = sum / 5;
        if(aver >90){
            printf("%d\n",i+1 );
            break;
        }
        if(*(*(p+i)+0)>85&&*(*(p+i)+1)>85&&*(*(p+i)+2)>85&&*(*(p+i)+3)>85&&*(*(p+i)+4)>85){
            printf("%d\n",i+1 );
            break;
        }
    }
}
int main()
{
	int score[4][5] = { 0 },i;
	for (i = 0; i < 4; i++)
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