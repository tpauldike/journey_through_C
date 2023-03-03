#include <stdio.h>
#include <string.h>

typedef struct phonebook{
    char name[100];
    char code[5];
    unsigned int no;
} contact;

void print(contact name);

int main(void)
{
    contact Maro;
    contact Amaka;

    strcpy(Maro.name, "Peter Obi");
    strcpy(Maro.code, "+124");
    Maro.no= 12341234;

    strcpy(Amaka.name, "Madam Amaka");
    strcpy(Amaka.code, "+234");
    Amaka.no = 43214321;

    print(Maro);
    print(Amaka);

    return 0;
}

void print(contact anything)
{
    printf("%s\n", anything.name);
    printf("%s ", anything.code);
    printf("%d\n", anything.no);
    putchar('\n');
}
