#include "lists.h"

/**
 * insert_dnodeint_at_index - insets new node at an index
 * @h: pointer to beginning of the list
 * @idx: index where the new node is to be inserted
 * @n: the new node data
 * 
 * Return: the address of the new node otherwise NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *traverse;
	unsigned int pos;

	if (h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *h;
		newnode->prev = NULL;
		if (newnode->next != NULL)
			newnode->next->prev = newnode;
		*h = newnode;
	}
	else
	{
		traverse = *h;
		for (pos = 0; traverse != NULL && pos < (idx - 1); pos++)
			traverse = traverse->next;
		if (traverse == NULL)
		{
			free(newnode);
			return (NULL);
		}
		newnode->next = traverse->next;
		newnode->prev = traverse;
		if (traverse->next != NULL)
			traverse->next->prev = newnode;
		traverse->next = newnode;
	}
	return (newnode);
}
