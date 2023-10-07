#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- entry point
 * Description: prints the value of n; zero, positive or negative
 * Return: should always 0 as (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d ", n, n % 10);

	/* here goes the code */
	if (n % 10 > 5)
		printf("and is greater than 5\n");

	else if (n % 10 == 0)
		printf("and is 0\n");

	else
		(n % 10 < 6 && n % 10 != 0);
		printf("and is less than 6 and not 0\n");

	return (0);
}
