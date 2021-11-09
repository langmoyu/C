#include <stdio.h>

int myScanf()
{
	int temp = 0;
	while (1)
	{
		scanf("%d", &temp);
		if (temp > 0 && temp - (int)temp == 0)
		{
			return temp;
			break;
		}
		else
		{
			printf("Error! Please try again!\n");
		}
	}

}

int main()
{
	int day = 0;
	int num = 0;
	printf("Please enter the rest of peach:\n");
	num = myScanf();
	printf("Please enter number of days: \n");
	day = myScanf();
	for (int i = 0; i < day; i++)
	{
		num = 2 * (num + 1);
	}
	printf("The amount of peach is %d\n", num);
	return 0;
}
