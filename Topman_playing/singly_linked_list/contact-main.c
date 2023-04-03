#include "lists.h"

/**
 * main - Entry point for contacts
 *
 * Return: return 0 on succesful execution
 */
int main(void)
{
	contact *head;

	/* the head and first node created */
	head = malloc(sizeof(contact));
	strcpy(head->name, "Ebubé Anyanwu");
	strcpy(head->code, "+233");
	head->no = 12321422;
	head->next = NULL;

	printc(head); /* print MY CONTACTS */
	countc(head); /* count MY CONTACTS */

	/* add some new contacts */
	addc(head, "Juliet Ndlamini", "+312", 42431135);
	addc(head, "Samuel Adewale", "+234", 11455342);
	addc(head, "Abiodun Shittu", "+197", 12342345);
	addc(head, "Oluwasegun Oyelola", "+231", 43125122);
	addc(head, "Naheemah Bello", "+254", 42151212);
	addc(head, "Topman Paul-Dike", "+112", 43451322);

	countc(head); /* count again */
	printc(head); /* print MY CONTACT now */

	return (0);
}
