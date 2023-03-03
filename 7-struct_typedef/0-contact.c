#include <stdio.h>
#include <string.h>

typedef struct phonebook{
    char name[100];
    char code[5];
    unsigned int no;
} contact;

int main(void)
{
    contact Maro;
    contact Amaka;

    strcpy(Amaka.name, "Madam Amaka");
    strcpy(Amaka.code, "+234");
    Amaka.no = 43214321;

    strcpy(Maro.name, "Peter Obi");
    strcpy(Maro.code, "+124");
    Maro.no= 12341234;

    //to print the contact's name
    printf("%s\n", Maro.name);
    //print country code and number
    printf("%s %d\n", Maro.code, Maro.no);

    printf("\n%s\n", Amaka.name);
    printf("%s %d\n", Amaka.code, Amaka.no);

    return 0;
}
