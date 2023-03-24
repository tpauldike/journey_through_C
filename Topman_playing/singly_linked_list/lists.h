#ifndef LIST_H
#define LIST_H

/* header files needed */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* STRUCTS & PROTOTYPES USED FOR 'int_list' */

/**
 * struct list - a struct for the node of the int list
 * @n: integer value
 * @link: the link to the next node
 */
struct list
{
	int n;
	struct list *link;
};

/* giving my struct for integer list an alias */
typedef struct list node;

/* 'int_list' function prototypes */
void count_list(struct list *head);
void node_addr(node *head_ptr);
void print_data(node *head_ptr);
void newl(void);
node *add_node(node *new, int n);


/* STRUCTS & PROTOTYPES USED FOR 'myContact' */

/**
 * struct phonebook - struct for contacts
 * @name: name of the contact
 * @code: country code of the contact
 * @no: phone number of the contact
 * @next: points to the next contact on the list
 */
struct phonebook
{
	char name[100];
	char code[5];
	unsigned int no;
	struct phonebook *next;
};

/* alias for the phonebook struct */
typedef struct phonebook contact;

/* phonebook function prototypes */
void printc(contact *head);
contact *addc(contact *head, char *name, char *code, int no);
void countc(contact *head);

#endif /* LIST_H */
