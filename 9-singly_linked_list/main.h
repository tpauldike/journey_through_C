#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* STRUCT AND FUCTION PROTOTYOES FOR THE INTEGER LIST */
typedef struct myList {
    int num;
    struct myList *next;
} list;

void print(struct myList *head);
list *new(list *head, int value);

/* STEUCT AND FUNCTION PROTOTYPES FOR ATTENDANCE LIST */

struct attendance{
	char name[100];
	int id;
	int cohort;
	struct attendance *next;
};

/* alias for the struct above */
typedef struct attendance atnd;
void display_rec(atnd *h_ptr);
atnd *add_rec(atnd *h_ptr, char *name, int id, int cohort);

#endif
