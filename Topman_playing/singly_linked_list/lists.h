#ifndef LIST_H
#define LIST_H

/* header files needed */
#include <stdio.h>
#include <stdlib.h>

/**
 * struct list - a struct for the node of the list
 * @n: integer value
 * @link: the link to the next node
 */
struct list
{
	int n;
	struct list *link;
};

/* giving my struct an alias */
typedef struct list node;

/* function prototypes */
void count_list(struct list *head);
void node_addr(node *head_ptr);
void print_data(node *head_ptr);
void newl(void);
node *add_node(node *new, int n);

#endif /* LIST_H */
