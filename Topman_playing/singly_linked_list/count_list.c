#include "lists.h"

/**
 * count_list - counts and prints the number of nodes
 * @head: pointer to the first node
 * Return: void
 */
void count_list(struct list *head)
{
	struct list *ptr;
	int no = 0;

	if (head == NULL)
	{
		printf("The list is empty!\n");
		exit(1);
	}

	ptr = head;
	while (ptr != NULL)
	{
		no++;
		ptr = ptr->link;

	}
	printf("The list has %d nodes now\n", no);
}
