#include "lists.h"
/**
 * *insert_dnodeint_at_index - Write a function that inserts a new node
 * at a given position.
 * @h: pointer to pointer head node doboble linked list
 * @idx: position
 * @n: data
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
		return (NULL);
	/* if idx is 1 make a new node as head*/
	if (idx == 1)
		return (add_dnodeint(h, n));
	/* make a temp node and traverse to the node previous to the idx*/
	temp = *h;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp)
			temp = temp->next;
	}
	/* if the previous node is not null, adjust the links*/
	if (temp)
	{
		new_node->next = temp->next;
		new_node->prev = temp;
		temp->next = new_node;
		if (new_node->next)
			new_node->next->prev = new_node;
	}
	return (new_node);
}
