#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

typedef struct myList {
    int num;
    struct myList *next;
} list;

void print(struct myList *head);
list *new(list *head, int value);

#endif
