#include <stdio.h>

typedef struct D{
	int year;
	int month;
	int day;
}DATE;

//判断是否为闰年
int IsLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

//获取某年某月的天数
int dayNum(int year, int month)
{
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
		break;
	case 2:
		return IsLeapYear(year) ? 29 : 28;
		break;
	default:
		return 0;
		break;
	}
}

//判断日期是否合理
int judgeDate(int year, int month, int day)
{
	if (year < 1992)
		return 1;
	if (month < 1 || month > 31)
		return 1;
	if (day < 1 || day > dayNum(year, month))
		return 1;
	return 0;
}

//计算2个日期相隔的天数
int dayLess(DATE dateF, DATE dateL)
{
	int num = 0;
	while (1)
	{
		if (dateF.year == dateL.year && dateF.month == dateL.month && dateF.day == dateL.day) 
			break;
		if (dateF.day < dayNum(dateF.year, dateF.month))
		{
			dateF.day++;
		}
		else
		{
			dateF.day = 1;
			if (dateF.month < 12)
			{
				dateF.month++;
			}
			else
			{
				dateF.month = 1;
				dateF.year++;
			}		
		}
		num++;
	}
	return num;
}

int main()
{
	DATE date1, date2;
	date1.year = 1992;
	date1.month = 1;
	date1.day = 1;
	while (1)		//用户输入一个 晚于1992/1/1 的日期
	{
		printf("please enter the date:(year/month/day)\n");
		scanf("%d/%d/%d", &date2.year, &date2.month, &date2.day);
		if (judgeDate(date2.year, date2.month, date2.day))
		{
			printf("Date error!Please try again!\n");
			continue;
		}
		else
		{
			break;
		}
	}
	int days = dayLess(date1, date2);
	printf("from 1992/1/1 to %d/%d/%d by %d days\n", date2.year, date2.month, date2.day, days);
	if (days % 5 == 0 || days % 5 == 4)
		printf("Net!\n");
	else
		printf("Fishing!\n");
	return 0;
}
