/* A program that outputs "Welcome to the PLD" */
/* A program that promtpts the user for his cohort and prints "Welcome to the PLD*/
/* Make it print "Access denied" if the participant is not from cohort 10*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cohort;

	printf("Enter your cohort: ");
	scanf("%d", &cohort);
	if (cohort != 10)
	{
		printf("Access denied\n");
	}
	else
	{
		printf("Welcome to the PLD\n");
	}
	return (0);
}
