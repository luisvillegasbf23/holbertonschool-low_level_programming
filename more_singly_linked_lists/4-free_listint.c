#include "lists.h"
/**
 * free_listint - Write a function that frees a listint_t list.
 * @head: head of list
 * Return: void
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
