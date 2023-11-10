#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - variadic function that sums up all parameters passed.
 * @n: The numbers of parameters expected.
 *
 * Description: The function sums up all parameters passed as arguments
 * and returns the result.
 *
 * Return: The sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
