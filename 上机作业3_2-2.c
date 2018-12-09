extern float Result[5];
void Score(float score[5][4])
{
    float attend[5];
    float homework[5];
    float text[5];
	float final[5];
	for (int i = 0; i < 5; i++)
	{
		attend[i] = score[i][0] / 10;
		homework[i] = score[i][1] / 5;
		text[i] = score[i][2] / 5;
		final[i] = score[i][3] / 2;
	}
	for (int i = 0; i < 5; i++)
		Result[i] = attend[i] + homework[i] + text[i] + final[i];
}
void Sort(float relt[5])
{
	for(int i=0;i<4;i++)
		for(int j=0;j<4-i;j++)
			if (relt[j+1] > relt[j])
			{
				float t;
				t = relt[j];
				relt[j] = relt[j+1];
				relt[j + 1] = t;
			}
}