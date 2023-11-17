#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list.
 * @head: Pointer to the head of the linked list.
 * @str: String to store in the list.
 *
 * Return: Address of the new head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t length = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	while (str[length])
		length++;

	newNode->len = length;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
