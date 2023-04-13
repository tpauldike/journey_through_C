#include <stdio.h>

int a =5, b=7;
void add(void);
int main(void)
{
    add();
    a = 2, b = 1;
    add();

    return (0);
}

void add(void)
{
    printf("%d\n", a+b);
}
