#include "lists.h"
/**
 * *get_nodeint_at_index - Write a function that returns the
 * nth node of a listint_t linked list.
 * @head: pointer
 * @index: index to search in the lists
 * Return: if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp && count != index)
	{
		temp = temp->next;
		count++;
	}
	return (temp);
}
