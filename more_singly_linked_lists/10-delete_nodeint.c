#include "lists.h"
/**
 * delete_nodeint_at_index - Write a function that deletes the 
 * node at index index of a listint_t linked list.
 * @head: node head
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *aux = *head;
	listint_t *other;

	if ((*head) ==  NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (!aux)
			return (-1);
		aux = aux->next;
	}
	other = aux->next;
	aux->next = other->next;
	free(other);
	return (1);
}
