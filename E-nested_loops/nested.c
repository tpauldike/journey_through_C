#include <stdio.h>

int main(void)
{
    int p, q;
    char letter = 'b';
    char name[6] = "Topman";

    for (q=0; q<10; q++)
    {
	for (p = 0; p<6; p++)
	{
	    putchar(name[p]);
	}
	putchar('\n');
    }
//    printf("p is now: %i\n", p);
/*
    for(p = 1; p <= 10; p++)
    {
//	printf("%i. %s\n", p, name);
	printf("%s\n", name);
    }*/

    return (0);
}
