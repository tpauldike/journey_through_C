#include "lists.h"

void countc(contact *head)
{
	contact *p = head;
	unsigned int n = 0;

	if(!head)
	{
		printf("Can not count: not a contact list!!\n");
		return;
	}
	else if (head == NULL)
	{
		printf("You have 0 contact\n");
		return;
	}
	while (p != NULL)
	{
		n++;
		p = p->next;
	}
	if (n == 1)
		printf("---\nYou have only 1 contact in your phonebook\n---\n");
	else
		printf("---\nYou have %d contacts in your phonebook\n---\n", n);
}
