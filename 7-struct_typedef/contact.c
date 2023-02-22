#include <stdio.h>

struct phonebook{
  char name[10];
  unsigned int no[12];
} contact;


int main(void)
{
  contact Uduak;

  Uduak.name[0]= "Uduak Peter";
  Uduak.no[0]= 1234562;

  return 0;
}
