/*
"More or Less" game - 01/31/10 - Jean-Marc Berthommé
Exercice proposed by M@teo21 on the "Site du Zér0" 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{
	int found = 0, counter = 0;
	int mystery_number, proposed_number;

	srand(time(NULL));
	mystery_number = 1 + rand()%100; 	// between 1 and 100

	printf("What is the mystery number [1..100] ? ");
	scanf("%d", &proposed_number); counter++;

	while (!found)
	{
		if (proposed_number == mystery_number)
		{
			printf("\nCongratulations, you found the mystery number in %d moves!\n", counter);
			found = 1; counter = 0;
		}
		else if (proposed_number > mystery_number)
		{
			printf("It's less!\n");
			printf("\nWhat is the mystery number [1..100] ? ");
			scanf("%d", &proposed_number); counter++;
		}
		else
		{
			printf("It's more!\n");
			printf("\nWhat is the mystery number [1..100] ? ");
			scanf("%d", &proposed_number); counter++;
		}
	}
	return 0;
}