#include "lists.h"

/**
 * print_listint - prints all the elements of listint_t list
 * @h: pointer to linked list of type listint_t
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t b = 0;

	while (h)
	{
		printf("%d\n", h->n);
		b++;
		h = h->next;
	}

	return (b);
}
