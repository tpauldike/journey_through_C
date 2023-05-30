#include <stdio.h>

void ant(int num1, int num2)
{
        printf("%i + %i = %i\n", num1, num2, num1+num2);
}
int main(void)
{
        ant(2, 4);
        ant(8, 1);
        ant(4, 4);
        ant(3, 2);
        ant(1, 0);
        return (0);
}
