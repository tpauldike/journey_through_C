#include <stdio.h>

int main(void)
{
	putchar(65);
	/* making putchar print 0 - 9 */
	putchar(9 + '0'); //putchar(9+48) == putchar(57) == 9
	putchar(15 + '0'); //putchar(15+48) == putchar(63)  == ?
	putchar(3 + '0'); //putchar(3+48) == putchar(51) == 3

	/* A9?3 */

	return (0);
}
