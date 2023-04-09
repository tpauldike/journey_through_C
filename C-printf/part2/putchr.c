#include "header.h"

int putchr(char z)
{
	return write(1, &z, 1);
}
