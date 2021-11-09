#include <stdio.h>

//1.4-enumerated type
enum Weekday
{
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY
};

//2.2-structure type
struct Person
{
	int age;
	float weight;
	char name[10];
};


//2.3-union type
union Shit
{
	char c;
	int a;
	double d;
};


int main()
{
	/*
	Data types in C
	1.basic types
		1.1.integer type
		1.2.float type
		1.3.character type
	 	1.4.enumerated type
	2.structural types
		2.1.array type
		2.2.structure type
		2.3.union type
	3.pointer type
	4.empty type
	*/

	//1.1->integer types
	printf("1.1->integer types\n");
	//
	//1.int
	//2.short(short int)
	//3.long(long int)
	//4.long long(long long int)
	//
	printf("size of int: %d\n", sizeof(int));
	printf("size of short: %d\n", sizeof(short));
	printf("size of long: %d\n", sizeof(long));
	printf("size of long long: %d\n", sizeof(long long));
	//signed and unsigned
	printf("#signed and unsigned\n");
	//signed int(signed) / unsigned int(unsigned)
	printf("size of signed int: %d\n", sizeof(signed));
	printf("size of unsigned int: %d\n", sizeof(unsigned));
	//signed short / unsigned short	
	printf("size of signed short: %d\n", sizeof(signed short));
	printf("size of unsigned short: %d\n", sizeof(unsigned short));
	//signed long / unsigned long
	printf("size of signed long: %d\n", sizeof(signed long));
	printf("size of unsigned long: %d\n", sizeof(unsigned long));
	//signed long long / unsigned long long	
	printf("size of signed long: %d\n", sizeof(signed long long));
	printf("size of unsigned long: %d\n", sizeof(unsigned long long));
	
	//1.2->float type
	printf("1.2->float type\n");
	//
	//single precision: float
	//double precision: double
	//
	printf("size of float: %d\n", sizeof(float));
	printf("size of double: %d\n", sizeof(double));
	//1.3->character type
	printf("1.3->character type\n");
	//
	//char
	//
	printf("size of char: %d\n", sizeof(char));

	//1.4->enumerated type
	printf("1.4->enumerated type\n");
	//
	//enum
	//
	printf("size of enum: %d\n", sizeof(enum Weekday));

	//2.1->array type
	printf("2.1->array type\n");
	//
	//one-dimensional array
	//twe-dimensional array
	//
	char arr1[10];
	printf("size of one-dimensional array: %d\n", sizeof(arr1));
	int arr2[4][6];
	printf("size of twe-dimensional array: %d\n", sizeof(arr2));

	//2.2-> structure type
	printf("2.2->structure type\n");
	//
	//struct
	//
	printf("size of struct: %d\n", sizeof(struct Person));

	//2.3->union type
	printf("2.3->union type\n");
	//
	//union
	//
	printf("size of union: %d\n", sizeof(union Shit));

	//3->pointer type
	printf("3->pointer type\n");
	//
	//*
	//
	printf("size of int*: %d\n", sizeof(int*));
	printf("size of char*: %d\n", sizeof(char*));
	printf("size of double*: %d\n", sizeof(double*));

	return 0;
}
