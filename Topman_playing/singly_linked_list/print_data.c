#include "lists.h"

/**
 * print_data - prints the data in the list
 *
 * @head_ptr: the pointer to the first node
 *
 * Return: Nothing
 */
void print_data(node *head_ptr)
{
	node *ptr;

	if (head_ptr == NULL)
	{
		printf("Error:\tEmpty list!\n");
		exit(1);
	}

	ptr = head_ptr;

	printf("The data in the linked list:\n");
	while (ptr != NULL)
	{
		printf("%d ", ptr->n);
		ptr = ptr->link;
	}
	newl(); /* defined in newl.c */
}
