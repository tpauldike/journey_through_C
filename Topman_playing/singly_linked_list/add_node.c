#include "lists.h"

/**
 * add_node - adds a new node to the singly linked list
 * @new: the head; pointing the first node
 * @n: the data (integer) to be added
 * Return: the new node created as the last node
 */
node *add_node(node *new, int n)
{
	node *ptr, *hptr = new;
	int count = 0, no;

	/* check whether the singly linked list exist */
	if (!new)
	{
		printf("The list does not exist!\n");
		exit(1);
	}

	/* move to the very last node */
	while (hptr->link != NULL)
		hptr = hptr->link;

	/* add a new node as the last node */
	ptr = malloc(sizeof(node));
	ptr->n = n;
	ptr->link = NULL;
	hptr->link = ptr;
	printf("New node successfully added\n");

	return (ptr);
}
