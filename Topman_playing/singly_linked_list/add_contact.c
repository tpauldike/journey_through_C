#include "lists.h"

contact *addc(contact *head, char *name, char *code, int no)
{
	contact *p = head, *tmp;

	if(!head)
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
