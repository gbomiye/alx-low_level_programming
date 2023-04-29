#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: points to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 , or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *real = NULL;
unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	real = temp->next;
	temp->next = real->next;
	free(real);

	return (1);
}
