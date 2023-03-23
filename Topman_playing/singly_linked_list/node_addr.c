#include "lists.h"

/**
 * node_addr - prints the memory address of each node
 * @head_ptr: the head of the linked list
 * Return: returns nothing
 */
void node_addr(node *head_ptr)
{
	int c = 0;
	node *head = head_ptr;

	if (head_ptr == NULL)
	{
		printf("Error: head pointer is NULL\n");
		exit(1);
	}

	while (head != NULL)
	{
		c += 1;
		printf("addr of node %d: %p\n", c, head);
		head = head->link;
	}
}
