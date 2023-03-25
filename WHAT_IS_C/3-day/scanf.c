#include <stdio.h>

int main(void)
{
	int cohort;
	char name[20];

	printf("Enter your cohort: ");
	scanf("%d", &cohort);
	printf("Enter your name: ");
	scanf("%s", name);
	printf("Welcome %s of cohort %d\n", name,  cohort);

	return (0);
}
