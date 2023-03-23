#include "main.h"

void print(struct myList *head)
{
    struct myList *p = head;

    if (p == NULL)
	printf("Empty list!\n");

    while(p != NULL)
    {
	printf("%d ", p->num);
	p = p->next;
    }
    putchar('\n');
}
