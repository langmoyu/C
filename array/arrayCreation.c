#include <stdio.h>

//Print the array
void PrintArr(int sz ,int arr[])
{
	int i = 0;
	for (i = 0 ; i < sz ; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");	

}


int main()
{
	//creat a int-type array
	//linear array
	int arr1[10];
	//there is no initialization up there
	//here is a better way to define it 
	int arr2[10] = { 0 };	//All elements in the array initialized to 0
	//Full initialization
	int arr3[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };	//This operation initializes each element
        //Incomplete initialization
        int arr4[10] = { 0, 1, 2, 3, 4 };	//Initialize part it and default to 0 for therest
	//Specifies the element to initialize
	int arr5[10] = { [5] = 6 };
	//No number of elements is specified
	int arr6[] = { 0, 1, 2 };

	//print these array
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	printf("arr1: ");
	PrintArr(sz, arr1);

	sz = sizeof(arr2) / sizeof(arr2[0]);
	printf("arr2: ");
	PrintArr(sz, arr2);

	sz = sizeof(arr3) / sizeof(arr3[0]);
	printf("arr3: ");
	PrintArr(sz, arr3);

	sz = sizeof(arr4) / sizeof(arr4[0]);
	printf("arr4: ");
	PrintArr(sz, arr4);

	sz = sizeof(arr5) / sizeof(arr5[0]);
	printf("arr5: ");
	PrintArr(sz, arr5);

	sz = sizeof(arr6) / sizeof(arr6[0]);
	printf("arr6: ");
	PrintArr(sz, arr6);

	return 0;
}
	       
	
