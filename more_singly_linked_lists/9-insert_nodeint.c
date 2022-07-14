#include "lists.h"
/**
 * *insert_nodeint_at_index - Write a function that inserts a new node
 * at a given position.
 * @head: pointer
 * @idx: position
 * @n: data
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{	new->next = temp;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;
	return (new);
}
