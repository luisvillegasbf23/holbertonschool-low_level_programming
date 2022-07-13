#include "lists.h"
/**
 * *add_nodeint - Write a function that adds a new
 * node at the beginning of a listint_t list.
 * @head: pointer
 * @n: int
 * Return: the address of the new element
 * or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
		free(new_node);
	return (new_node);
}
