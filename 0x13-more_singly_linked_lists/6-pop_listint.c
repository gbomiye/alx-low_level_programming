#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside deleted elements or 0 if the list empty
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int node;

	if (!head || !*head)
		return (0);

	node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (node);
}
