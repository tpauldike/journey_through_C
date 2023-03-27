#include "main.h"

int main(void)
{
    struct myList *head, *node;
    //int arr[] = {2, 5, 4}

    head = malloc(sizeof(struct myList));
    head->num = 2;
    head->next = NULL;

    node = malloc(sizeof(struct myList));
    node->num = 5;
    node->next = NULL;
    head->next = node;

    node = malloc(sizeof(struct myList));
    node->num = 4;
    node->next = NULL;
    head->next->next = node;

    print(head);
    new(head, 12);
    new(head, 100);
    new(head, 16);
    print(head);

    return (0);
}
