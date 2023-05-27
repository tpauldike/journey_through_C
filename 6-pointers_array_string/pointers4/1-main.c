#include <stdio.h>

int main(void)
{
    int n;
    int *p;

    p = &n;
    n = 402;
    printf("n = %i\n", n);
    *p = 98;
    printf("n = %i\n", n);

    return (0);
}
