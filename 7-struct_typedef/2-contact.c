#include <stdio.h>

typedef struct phonebook{
    char name[100];
    char code[5];
    unsigned int no;
} contact;

void print(contact name);
contact new(contact self, char* name, char* code, int no);

int main(void)
{
    contact Maro;

    new(Maro, "Peter Obi", "+124", 12341234);
    print(Maro);

    return 0;
}

void print(contact self)
{
    printf("%s\n", self.name);
    printf("%s ", self.code);
    printf("%d\n", self.no);
}

contact new(contact self, char* name, char* code, int no)
{
    strcpy(self.name, name);
    strcpy(self.code, code);
    self.no = no;

    return(self);
}
