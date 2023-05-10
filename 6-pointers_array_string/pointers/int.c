#include <stdio.h>

int main(void)
{
    int number = 123;
    int num[] = {1, 2, 3};

    //64, 4
    printf("%lu\n", sizeof(number));
    printf("%lu\n", sizeof(num));

    return (0);
}
