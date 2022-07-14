#include "lists.h"
/**
 * free_listint2 - Write a function that frees a listint_t list.
 * @head: pointer
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
