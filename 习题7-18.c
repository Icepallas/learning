#include<stdio.h>
int leap_year(int lep)
{
	int leap;
	if (lep % 4 == 0)
	{
		if (lep % 100 == 0)
		{
			if (lep % 400 == 0)
				leap = 1;
			else leap = 0;
		}
		else leap = 1;
	}
	else leap = 0;
	return leap;
}
int odd_mon(int mon,int dae)
{
	int dat, extr = mon - 7;
	if (mon == 1) return dae;
	else if (mon < 8)
		dat = 30 * (mon / 2 - 1) + 31 * (mon / 2) + 28 + dae;
	else if (mon > 8)
		dat = 31 * 4 + 28 + 30 * 2 + 31 * (extr / 2) + 30 * (extr / 2 - 1) + dae;
	return dat;
}
int even_mon(int mon, int dae)
{
	int dat, extr = mon - 8;
	if (mon < 9)
		dat = 30 * (mon / 2 - 2) + 31 * (mon / 2) + 28 + dae;
	else if (mon > 9)
		dat = 31 * 5 + 28 + 30 * 2 + 30 * (extr / 2) + 31 * (extr / 2 - 1) + dae;
	return dat;
}
int main()
{
	int month, day, year, date, lap;
	printf("Please enter the date,the format is month.day.year\n");
	scanf_s("%d.%d.%d", &month, &day, &year);
	if (day > 31 || day < 1 || month>12 || month < 1)
	{
		printf("error.\n");
		return 1;
	}
	if (month == 2) date = 31 + day;
	else if ((month % 2) == 1)
		date = odd_mon(month, day);
	else if ((month % 2) != 1)
		date = even_mon(month, day);
	if (day != 29 && month != 2 && (lap = leap_year(year)) == 1) date++;
	printf("The day is %d day(s) of %d year.\n", date, year);
	return 0;
}