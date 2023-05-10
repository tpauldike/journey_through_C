#include <stdio.h>

int main(void)
{
    int num;
    int *fowl;

    num = 20;
    fowl = &num;

    printf("&num: %p\n", &num);
    printf("fowl: %p\n", fowl);
    putchar('\n');
    printf("value of num: %d\n", num);
    printf("it's just to print the steing out: %d\n", *fowl);

//    printf("%lu\n", sizeof(num));

    return (0);
}
