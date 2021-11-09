#include <stdio.h>

int main() {
	int a = 0, b = 0, c = 0;
	printf("Please enter three numbers：\n");
	scanf("%d %d %d", &a, &b ,&c);
	int max = 0, min = 0;
	max = a > b ? a : b;
	max = max > c ? max : c;
	min = a > b ? b : a;
	min = min > c ? c : min;
	printf("max = %d\tmin = %d\n", max, min);
	return 0;
}