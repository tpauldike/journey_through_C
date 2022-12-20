#include <stdio.h>

int main(void)
{
	int times;
	int number = 2;

	for (times = 1; times < 13; times++)
	{
		printf("%d x %d = %d\n", number, times, number*times);
		//	__ x __ = __\n
	}

	return (0);
}

//    for (13; 13 < 13; times + 1)
//    {
//         [2] x [12] = [2 * 12]
//    }

/*
2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
...
2 x 11 = 22
2 x 12 = 24

*/
