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
	count_list(head); /* defined in count_list.c */
	newl();
	node_addr(head); /* defined in node_addr.c */
	newl();
	print_data(head);
	newl();
	add_node(head, 30); /* defined in add_node.c */
	newl();
	print_data(head);
	newl();  /* defined in newl.c */
	add_node(head, 15);
	add_node(head, 50);
	newl();
	print_data(head); /* defined in print_data.c */
	newl();
	count_list(head);
	newl();

	return (0);
}
