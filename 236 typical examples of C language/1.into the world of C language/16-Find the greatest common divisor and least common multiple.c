#include <stdio.h>

//获得两数最大公约数函数
int GetGCD(int a, int b) {
	int i = a > b ? b : a;
	while (i > 0)
	{
		if (a % i == 0 && b % i == 0)
		{
			return i;
			break;
		}
		i--;
	}
	return i;
}

//获得两数最小公倍数函数
int GetLCM(int a, int b) {
	int i = a > b ? a : b;
	while (1)
	{
		if (i % a == 0 && i % b == 0)
		{
			return i;
			break;
		}
		i++;
	}
}

int main() {
	int a = 0, b = 0;
	printf("Please enter two numbers：\n");
	scanf("%d %d", &a, &b);
	//greatest common divisor /least common multiple
	int GCD = 0, LCM = 0;
	GCD = GetGCD(a, b);
	if (GCD == 0)
	{
		printf("The two numbers have no greatest common divisor！\n");
	}
	else
	{
		printf("The greatest common divisor of these two numbers is %d\n", GCD);
	}
	LCM = GetLCM(a, b);
	printf("The least common multiple of these two numbers is %d\n", LCM);
	return 0;
}
