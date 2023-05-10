#include <stdio.h>

int main(void)
{
    int class[3] = {10, 20, 30};

    printf("class[0]: %i\n", class[0]);
    printf("class[1]: %i\n", class[1]);
    printf("class[2]: %i\n", class[2]);

    class[0] = 1;
    putchar('\n');
    printf("class[0]: %i\n", class);

    return (0);
}
