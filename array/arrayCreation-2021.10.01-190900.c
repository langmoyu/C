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
//	int arr1[10];
//	//there is no initialization up there
//	//here is a better way to define it 
//	int arr2[10] = { 0 };	//All elements in the array initialized to 0
//	//Full initialization
//	int arr3[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };	//This operation initializes each element
//        //Incomplete initialization
//        int arr4[10] = { 0, 1, 2, 3, 4 };	//Initialize part it and default to 0 for therest
//	//Specifies the element to initialize
//	int arr5[10] = { [5] = 6 };
//	//No number of elements is specified
//	int arr6[] = { 0, 1, 2 };
//
	//print these array
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("arr1: ");
//	PrintArr(sz, arr1);
//
//	sz = sizeof(arr2) / sizeof(arr2[0]);
//	printf("arr2: ");
//	PrintArr(sz, arr2);
//
//	sz = sizeof(arr3) / sizeof(arr3[0]);
//	printf("arr3: ");
//	PrintArr(sz, arr3);
//
//	sz = sizeof(arr4) / sizeof(arr4[0]);
//	printf("arr4: ");
//	PrintArr(sz, arr4);
//
//	sz = sizeof(arr5) / sizeof(arr5[0]);
//	printf("arr5: ");
//	PrintArr(sz, arr5);
//
//	sz = sizeof(arr6) / sizeof(arr6[0]);
//	printf("arr6: ");
//	PrintArr(sz, arr6);
	
//	printf("%p\n",arr1);
//	printf("%p\n",arr2);
//	printf("%p\n",arr3);
//	printf("%p\n",arr4);
//	printf("%p\n",arr5);
//	printf("%p\n",arr6);
	
//	int i =  0;
//	for (i = 0; i < 10 ;i++ )
//	{
//		printf("&arr1[%d] : %p\n", i, &arr1[i]);
//	
//	}
//	
	//two-dimensional array
	//int arr7[3][4];
	//there is no initialization up there
	int arr8[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	//Full initialization
	//int arr9[3][4] = { 0, 1, 2, 3, 4, 5, 6 };
	//int arr10[3][4] = { { 0 } , { 0 } , { 0 } };
	//int arr11[3][4] = { {0 , 1 } , { 3 , 4} } ;


	//print these array
//	int i, j;
//	printf("arr7:\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr7[i][j]);
//		}
//		printf("\n");
//	}
//
//	printf("arr8:\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr8[i][j]);
//		}
//		printf("\n");
//	}
//	printf("arr9:\n");
//	
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr9[i][j]);
//		}
//		printf("\n");
//	}
//	printf("arr10:\n");
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr10[i][j]);
//		}
//		printf("\n");
//	}
//	printf("arr11:\n");
//
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr11[i][j]);
//		}
//		printf("\n");
//	}
	int i = 0;
	for(i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr8[%d][%d] : %p\n", i, j, &arr8[i][j]);
		}
	}



	return 0;
}
	       
	
