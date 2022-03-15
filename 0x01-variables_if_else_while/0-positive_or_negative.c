#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
/* more headers goes there */

/* betty style doc for function main goes there */
=======
#include <stdio.h>

/**
 * main - assigns a random number to init n everytime
 *
 * it executes and prints it
 *
 * Return:Always 0(Success)
 */
>>>>>>> 463f79100780f77a332cd0062afab1b324c3e3ba
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
	scanf("%d", n)
	if(n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if(n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
=======
	scanf("%d", &n);

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);

>>>>>>> 463f79100780f77a332cd0062afab1b324c3e3ba
	return (0);
}
