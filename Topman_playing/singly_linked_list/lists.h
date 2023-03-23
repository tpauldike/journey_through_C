#ifndef LIST_H
#define LIST_H

/* header files needed */
#include <stdio.h>
#include <stdlib.h>

/* struct for each node */
typedef struct list {
    int n;
    struct list *link;
} node;

/* function prototypes */
void count_list(struct list *head);
void node_addr(node *head_ptr);
void print_data(node *head_ptr);
void newl(void);
node* add_node(node *new, int n);

#endif /* LIST_H */
