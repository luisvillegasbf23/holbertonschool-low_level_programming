#include "lists.h"
/**
 * *add_dnodeint - Write a function that adds a new node at
 * the beginning of a dlistint_t list.
 * @head: pointer to pointer of head node
 * @n: data
 * Return: address of the new element or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node)
	{
		new_node->n = n;
		new_node->next = (*head);
		new_node->prev = NULL;
		(*head) = new_node;
		if ((*head) != NULL)
			(*head)->prev = new_node;
	}
	else
		free(new_node);
	return (new_node);
}
