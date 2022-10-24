#include "lists.h"

/**
 *add_nodeint - add a node at the tope
 *@head: to top of the list
 *@n: the new node integer
 *Return: NULL on failure or address of node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
