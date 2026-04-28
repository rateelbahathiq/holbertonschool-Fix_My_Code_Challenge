#include "lists.h"
#include <stdlib.h>

/* (*head)->prev->prev = (*head)->prev; fixed by (*head)->prev->next = (*head)->next; */
/* (*head)->prev->next = (*head)->next; */
/* (*head)->next->prev = (*head)->prev; */

/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: pointer to head of list
 * @index: index of node to delete
 *
 * Return: 1 if success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	for (i = 0; tmp != NULL && i < index; i++)
		tmp = tmp->next;

	if (tmp == NULL)
		return (-1);

	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;

	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;

	free(tmp);
	return (1);
}
