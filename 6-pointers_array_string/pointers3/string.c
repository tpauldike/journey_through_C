#include <stdio.h>

int number = 20;
int main(void)
{
    int var1 = 9;
    char var2 = '9'; //57

    int arr[4] = {10, 20, 30, 40};
    char str[5] = {'g', 'o', 'o', 'd', '\0'};
    char str2[5] = "abcd";
    char *str3 = "class";

    putchar(10 + '0');
    /* 10 + 48 = 58 */
    putchar('\n');
    putchar(3 + '0');
    /* 3 + 48 = 51 */
    putchar('\n');

    printf("str: %s\n", str);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    printf("*(str2+1): %c\n", *(str2+1));
    printf("*(arr+1)+4: %i\n", *(arr+1)+4);

    printf("number: %d\n", number);
    return (0);
}
