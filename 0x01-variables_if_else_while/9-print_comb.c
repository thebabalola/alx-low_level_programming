#include <stdio.h>

/**
 * main - prints all possible combinations of single-digi number
 * followed by a new line
 * Return: should always return 0 (Success)
 */
int main(void)
{
	int digi01, digi02;

	for	(digi01 = 0; digi01 <= 9; digi01++)

	{
		for (digi02 = 0; digi02 <= 9; digi02++)
		{
			/* prints first digit */
			putchar(digi01 + '0');
			/* prints comma */
			putchar(',');
			/* print a space */
			putchar(' ');
			/* print the second digit */
			putchar(digi02 + '0');

			if (!(digi01 == 9 && digi02 == 9))
			{
				/* prints another comma */
				putchar(',');
				/* prints another space */
				putchar(' ');
			}
		}
	}

	/* Prints newline character */
	putchar('\n');

	return (0);
}
