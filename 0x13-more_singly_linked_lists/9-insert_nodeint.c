#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position.
 * @head: pointer to head of list.
 * @idx: index where new node is inserted.
 * @n: integer element of function.
 *
 * Return: address of new node, or NULL if failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNodes, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	newNodes = malloc(sizeof(listint_t));
	if (newNodes == NULL)
		return (NULL);

	newNodes->n = n;
	newNodes->next = NULL;

	if (idx == 0)
	{
		newNodes->next = *head;
		*head = newNodes;
		return (newNodes);
	}

	current = *head;

	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(newNodes);
		return (NULL);
	}

	newNodes->next = current->next;
	current->next = newNodes;

	return (newNodes);
}

