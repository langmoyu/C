#include <stdio.h>

int main()
{
	int year = 0;
	printf("Please enter the number of year:\n");
	while (1)
	{
		scanf("%d", &year);
		if (year > 0)
		{
			break;
		}
		else
		{
			printf("Error!Try again!\n");
		}
	}
	if ((year % 4 == 0 && year %100 != 0) || (year % 400 == 0))
	{
		printf("%d was a leap year!", year);
	}
	else
	{
		printf("%d was not a leap year!\n", year);
	}
	return 0;
}
