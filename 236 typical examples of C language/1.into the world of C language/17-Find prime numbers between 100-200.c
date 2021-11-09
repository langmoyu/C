#include <stdio.h>

int main() {
	for (int i = 100; i <= 200; i++)
	{
		if (i % 2 != 0)
		{
			int j = 3;
			for( ; j < i; j++)
			{
				if (i % j == 0)
					break;
			}
			if (j == i)
			{
				printf("%d\t", i);
			}
		}
	}
	return 0;
}