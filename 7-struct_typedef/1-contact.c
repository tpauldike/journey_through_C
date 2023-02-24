#include <stdio.h>

typedef struct phonebook{
    char name[100];
    char code[5];
    unsigned int no;
} contact;

void print(contact name);

int main(void)
{
    contact Maro;

    strcpy(Maro.name, "Peter Obi");
    strcpy(Maro.code, "+124");
    Maro.no= 12341234;

    print(Maro);

    return 0;
}

void print(contact self)
{
    printf("%s\n", self.name);
    printf("%s ", self.code);
    printf("%d\n", self.no);
}

// +254 43214321
