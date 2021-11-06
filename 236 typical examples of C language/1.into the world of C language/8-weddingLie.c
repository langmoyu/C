#include <stdio.h>

//brute force
int main()
{

	int a = 0, b = 0, c = 0;
	for (a = 1; a <= 3; a++)
	{
		for (b = 1; b <= 3; b++)
		{
			for (c = 1; c <= 3; c++)
			{
				if (a != 1 && c != 1 && c != 3 && a != b && a != c && b != c)
				{
					printf("%c married A\n",a + 'X' - 1);
					printf("%c married B\n",b + 'X' - 1);
					printf("%c married C\n",c + 'X' - 1);
				}
			}
		}
	}
	return 0;
}
