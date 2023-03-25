#include <stdio.h>

int main(void)
{
	int cohort;
	char name[20];

	printf("Enter your cohort: ");
	scanf("%d", &cohort);
	printf("Enter your name: ");
	scanf("%s", name);
	if (cohort == 12)
	{
		printf("Welcome %s, you are qualified\n", name);
	}
	else
	{
		printf("Sorry %s, the class is not for cohort %d\n", name, cohort);
	}	

	return (0);
}
