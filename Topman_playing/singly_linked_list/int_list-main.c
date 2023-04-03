/* Playing with singly linked list */
#include "lists.h"

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	struct list *head, *next;

/* the head points to the first node */
	head = malloc(sizeof(struct list));
	head->n = 14;
	head->link = NULL;

	next = malloc(sizeof(struct list));
	next->n = 20;
	next->link = NULL;
	head->link = next;

	next = malloc(sizeof(struct list));
	next->n = 12;
	next->link = NULL;
	head->link->link = next;

/* calling all the functions I defined */
	newl();
	count_list(head); /* count the nodes */
	newl();
	print_data(head);
	newl();
	next = add_node(head, 30); /* add a new node */
	newl();
	print_data(head);
	newl();  /* prints a new line */
	next = add_node(head, 15);
	next = add_node(head, 50);
	newl();
	print_data(head); /* print all data in th linked list */
	newl();
	count_list(head);
	newl();
	node_addr(head); /* print nodes' address in memory */
	newl();

	return (0);
}
