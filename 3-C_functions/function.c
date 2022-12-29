#include <stdio.h>

void add2num(int Blessing, int John)
{
	printf("The sum of %d + %d = %d\n", Blessing, John, Blessing + John);
}


int main(void)
{
	add2num(20, 50);
	add2num(10, 5);
	add2num(30, 6);
	add2num(15, 13);
	add2num(22, 18);
	add2num(22, 11);

	return 0;	
}
