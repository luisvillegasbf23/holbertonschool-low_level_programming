#include "lists.h"
/**
 * free_list - Write a function that frees a list_t list.
 * @head: head of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
