#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct programmer {
    char name[50];
    int age;
    float height;
    struct programmer *nxt;
};
typedef struct programmer prog_t;
void show_programmers(prog_t *head);

int main(void)
{
    struct programmer *head;
    prog_t *next;

    head = malloc(sizeof(prog_t));
    strcpy(head->name, "Topman Paul-Dike");
    head->age = 30;
    head->height = 1.7;
    head->nxt = NULL;

    next = malloc(sizeof(prog_t));
    strcpy(next->name, "Sandra Udeike");
    next->age = 65;
    next->height = 1.9;
    next->nxt = NULL;
    head->nxt = next;

    next = malloc(sizeof(prog_t));
    strcpy(next->name, "Timothy Avell");
    next->age = 102;
    next->height = 0.7;
    next->nxt = NULL;
    head->nxt->nxt = next;

    show_programmers(head);

    return (0);
}

void show_programmers(prog_t *head)
{
    prog_t *new;

    new = head;
    puts("Programmer's Information\n");
    while(new != NULL)
    {
	printf("Name: %s\n", new->name);
	printf("Age: %d\nHeight: %.01f\n", new->age, new->height);
	puts("-----\t-----\t-----");
	new = new->nxt;
    }
}
