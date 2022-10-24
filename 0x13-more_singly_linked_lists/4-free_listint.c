#include "lists.h"

/**
*free_listint - removes the list from memory
*@head: top of the list
*Return: a void function
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
