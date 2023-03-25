#include "main.h"

void display_rec(atnd *h_ptr)
{
    atnd *ptr = h_ptr;

    printf("PLD ATTENDANCE 25/3/2023\n\n");
    while (ptr != NULL)
    {
	printf("Name: %s\nID: %d\nCohort: %d\n\n", ptr->name, ptr->id, ptr->cohort);
	ptr = ptr->next;
    }
}
