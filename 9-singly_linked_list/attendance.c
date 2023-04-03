#include "main.h"

int main(void)
{
/* head pointer, that points to the first member */
    atnd *h_ptr, *new_rec;

    h_ptr = malloc(sizeof(atnd));
    strcpy(h_ptr->name, "Ambrose Oyar");
    h_ptr->id = 101;
    h_ptr->cohort = 10;
    h_ptr->next = NULL;

    new_rec = malloc(sizeof(atnd));
    strcpy(new_rec->name, "Moritala Badmos");
    new_rec->id = 211;
    new_rec->cohort = 11;
    new_rec->next = NULL;
    h_ptr->next = new_rec;

    display_rec(h_ptr);

    add_rec(h_ptr, "Sandra Udieke", 123, 15);
    add_rec(h_ptr, "Whyte Emmanuel", 233, 21);

    printf("\n--- After adding ---\n\n");
    display_rec(h_ptr);
    add_rec(h_ptr, "whyte Emmanuel", 233, 21);
    return (0);
}
