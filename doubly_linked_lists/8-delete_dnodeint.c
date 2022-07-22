#include "lists.h"
/**
 * delete_dnodeint_at_index - Write a function that deletes
 * the node at index index of a dlistint_t linked list
 * @head: pointer to pointer to head double linked list
 * @index: position to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *delete = *head;
	dlistint_t *temp;

	if (*head)
	{
		temp = *head;
		/* if index is 1 make head next as head and delete prev head*/
		if (index == 0)
		{
			*head = (*head)->next;
			free(delete);
			if (*head)
				(*head)->prev = NULL;
			return (1);
		}
		/* else, make a temp node and traverse to the node prev*/
		else
		{
			for (i = 0; i < index - 1 && (*head)->next; i++)
				temp = temp->next;
		}
		/**
		 * If the previous node and next of the previous
		 * is not null, adjust links
		 */
		if (temp && temp->next)
		{
			delete = temp->next;
			temp->next = temp->next->next;
			if (temp->next->next)
				temp->next->next->prev = temp->next;
			free(delete);
			return (1);
		}
	}
	return (-1);
}
