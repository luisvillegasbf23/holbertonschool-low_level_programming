#include "lists.h"
/**
 * pop_listint - Write a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: pointer
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int x = 0;
	listint_t *prev = *head;

	if (*head == NULL)
		return (0);
	if (*head)
	{
		*head = (*head)->next;
		x = prev->n;
		free(prev);
	}
	return (x);
}
