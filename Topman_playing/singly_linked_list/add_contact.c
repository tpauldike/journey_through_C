#include "lists.h"

/**
 * addc - adds new contact at the end of the list
 * @head: pointer to the first contact
 * @name: name of the new contact
 * @code: country code of the new contact
 * @no: phone no. of the new contact
 * Return: returns a pointer to the new node
 */
contact *addc(contact *head, char *name, char *code, int no)
{
	contact *p = head, *tmp;

	if (!head)
	{
		perror("Invalid head pointer!\n");
		exit(1);
	}
	while (p->next != NULL)
	{
		p = p->next;
	}

	tmp = malloc(sizeof(contact));
	strcpy(tmp->name, name);
	strcpy(tmp->code, code);
	tmp->no = no;
	tmp->next = NULL;
	p->next = tmp;
	printf("Added: %s\n", name);

	return (p);
}
