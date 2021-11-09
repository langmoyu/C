#include <stdio.h>

//用户初始化数组函数
void UserInitializedArray(int* arr, int num) {
	for (int i = 0; i < num; i++)
	{
		printf("arr[%d]:", i);
		scanf("%d", &arr[i]);
	}
}

//遍历数组函数
void OutputArray(int* arr, int num) {
	for (int i = 0; i < num; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

//删除数组中元素函数
int DeleteElement(int* arr, int num, int temp) {
	int x = 0;
	for (int i = 0; i < num; i++)
	{
		if (arr[i] == temp)
		{
			x++;
			for (int j = i; j < num - 1; j++)
			{
				arr[j] = arr[j + 1];
			}
		}
	}
	//如果用户输入元素不存在则返回0,存在则返回新数组元素个数
	return x > 0 ? num - x : 0;
}

int main() {
	int arr[10] = { 0 };		//定义数组
	int sz = sizeof(arr) / sizeof(arr[0]);
	UserInitializedArray(arr, sz);
	printf("The array you initialize is as follows：\n");
	OutputArray(arr, sz);
	//用户删除元素
	int temp = 0;
	int x = 1;
	while (1)
	{
		printf("Please enter the element you want to delete：");
		scanf("%d", &temp);
		x = DeleteElement(arr, sz, temp);
		if (x == 0)
		{
			printf("The element you entered does not exist！\n");
			continue;
		}
		else
		{
			OutputArray(arr, x);
			break;
		}
	}
	return 0;
}