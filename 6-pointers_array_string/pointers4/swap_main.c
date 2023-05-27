#include <stdio.h>

int main(void)
{
    int two = 1, one = 2, for_now;

    printf("one: %i\n", one);
    printf("two: %i\n", two);

    for_now = two;
    two = one;
    one = for_now;

    puts("----After Swap----");
    printf("one: %i\n", one);
    printf("two: %i\n", two);

    return (0);
}
