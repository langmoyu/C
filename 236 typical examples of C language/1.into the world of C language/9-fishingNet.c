#include <stdio.h>

typedef struct D
{
	int year;
	int month;
	int day;
}DATE;





int main()
{
	DATE date1, date2;
	date1.year = 1992;
	date1.month = 1;
	date1.day = 1;

	printf("Please enter date:(year.month.day)");

	return 0;
}
