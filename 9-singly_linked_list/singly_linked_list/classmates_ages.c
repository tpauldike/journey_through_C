#include <stdio.h>
#include <stdlib.h>

struct my_node
{
	int age;
	struct my_node *next;
};


int main(void)
{
/* 15, 12, 13, 16, 11 */

	struct my_node *head_ptr, *next_ptr;
	head_ptr = malloc(sizeof(struct my_node));

	head_ptr->age = 15;
	head_ptr->next = NULL;

	next_ptr = malloc(sizeof(struct my_node));
	next_ptr->age = 12;
	next_ptr->next = NULL;

	head_ptr->next = next_ptr;

	next_ptr = malloc(sizeof(struct my_node));
	next_ptr->age = 13;
	next_ptr->next = NULL;

	head_ptr->next->next = next_ptr;  // ptr.next == &n.next

	while (head_ptr != NULL)
	{
		printf("%i ", head_ptr->age);
		head_ptr = head_ptr->next;
	}
	printf("\n");

	return (0);
}
