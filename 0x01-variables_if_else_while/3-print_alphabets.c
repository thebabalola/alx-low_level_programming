#include <stdio.h>

/**
 * main - prints alphabets in lowercase and uppercase
 * followed by a new line
 * Return: should always return 0 (Success)
*/
int main(void)
{
	char alphabet;

	/* Prints lowercase alphabets */
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	/* Prints uppercase alphabet */
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');  /* Prints a newline character */

	return (0);
}
