#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it with zeros.
 *
 * @nmemb: Number of elements in the array.
 * @size: Size in bytes of each element.
 *
 * Return: A pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alloc_memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alloc_memory = malloc(nmemb * size);

	if (alloc_memory == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		alloc_memory[i] = 0;

	return (alloc_memory);
}
