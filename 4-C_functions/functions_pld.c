#include <stdio.h>

/*prototypes*/ //header file == main.h
void addNum(int a, int b);
void subtractNum(int a, int b);
void multiplyInt(int a, int b);
void divideInt(int a, int b);

/*function for addtion*/
void addNum(int a, int b)
{
	printf("%d + %d = %d\n", a, b, a+b);
}

/*main program*/ //test file == main.c
int main(void)
{
	addNum(8, 3); // 8 + 3 = 11
	subtractNum(4, 3); // 4 - 3 = 1
	multiplyInt(2, 6); // 2 x 6 = 12
	divideInt(8, 3); // 8 / 3 = 2, remainder 2

	return (0);
}

/*function for subtraction*/
void subtractNum(int a, int b)
{
	printf("%d - %d = %d\n", a, b, a-b);
}

/*function for multiply*/
void multiplyInt(int a, int b)
{
	printf("%d x %d = %d\n", a, b, a*b);
}

/*function for divide*/
void divideInt(int a, int b)
{
	printf("%d / %d = %d, remainder %d\n", a, b, a/b, a%b);
}
