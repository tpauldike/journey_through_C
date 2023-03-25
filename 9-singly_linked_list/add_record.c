#include "main.h"

atnd *add_rec(atnd *h_ptr, char *name, int id, int cohort)
{
    atnd *tmp, *ptr = h_ptr;

    while (ptr->next != NULL)
	ptr = ptr->next;

    tmp = malloc(sizeof(atnd));
    strcpy(tmp->name, name);
    tmp->id = id;
    tmp->cohort = cohort;
    tmp->next = NULL;

    ptr->next = tmp;

    return (ptr);
}
