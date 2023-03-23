#include "main.h"

list *new(list *head, int value)
{
    list *p = head, *tmp;

    if (!head)
	perror("No list found\n");

    if (p != NULL)
	p = p->next;

    tmp = malloc(sizeof(list));
    tmp->num = value;
    tmp->next = NULL;
    p->next = tmp;
    printf("New node added!\n");

    return (tmp);
}
