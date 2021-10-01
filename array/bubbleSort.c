#include <stdio.h>

//printf the array function
void printArr(int sz, int arr[])
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

void bubbleSort(int sz, int arr[])
{
	int i = 0, j = 0;
	//descending order
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])	
			{
				arr[j] = arr[j] ^ arr[j + 1];
				arr[j + 1] = arr[j] ^ arr[j + 1];
				arr[j] = arr[j] ^ arr[j + 1];
			}
		}
	}

}



int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("initial:\n");
	printArr(sz, arr);

	//sort
	bubbleSort(sz,arr);
	printf("later:\n");
	printArr(sz, arr);


	return 0;
}
