#include <stdio.h>
#include <stdlib.h>

int main()
{

	int integerType;
	float floatType;
	double doubleType;
	char charType;
	long longType;
	double doubletype;
	int* intPoint;
	char* charPoint;
	long* longPoint;


	printf("Size of int: %lu bytes\n",sizeof(integerType));
	printf("Size of float: %lu bytes\n",sizeof(floatType));
	printf("Size of double: %lu bytes\n",sizeof(doubleType));
	printf("Size of char: %lu byte\n",sizeof(charType));
	printf("Size of long: %ld byte\n",sizeof(longType));
	printf("Size of double: %lu byte\n",sizeof(doubleType));
	printf("Size of unsigned int: %lu byte\n", (unsigned int)sizeof(int));
	printf("Size of unsigned char: %lu byte\n", (unsigned char)sizeof(char));
	printf("Size of unsigned long: %lu byte\n", (unsigned long)sizeof(long));
	printf("Size of unsigned int Test: %lu byte\n", sizeof(unsigned long));
	printf("Size of unsigned char Test: %lu byte\n", sizeof(unsigned char));
	printf("Size of unsigned long Test: %lu byte\n", sizeof(unsigned long));
	printf("Size of int pointer: %lu bytes\n",sizeof(intPoint));
	printf("Size of char pointer: %lu bytes\n",sizeof(charPoint));
	printf("Size of long pointer: %lu bytes\n",sizeof(longPoint));



	return 0;
}
//int, char, long, float, double, unsigned int, unsigned char, unsigned long, int *, char *, long *

