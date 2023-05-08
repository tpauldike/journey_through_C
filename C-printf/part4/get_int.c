#include "header.h"

void get_int(int num)
{
	int n, r_val;

	if (num == 0)
		return;

	n = num / 10;

	get_int(n);
	putchr(num%10 + '0');

	return;
}
