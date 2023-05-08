#include "header.h"

int my_puts(char *string)
{
	int idx = 0, r_val = 0;

	if (string)
	{
		while (string[idx] != '\0')
		{
			putchr(string[idx]);
			r_val += 1;
			idx++;
		}
	}
	putchr('\n');

	return (r_val);
}
