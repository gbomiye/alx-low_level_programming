#include "lists.h"

/**
 * free_listint - frees a list
 * @head: listint_t list to be freed
 * au - gt
 */

void free_listint(listint_t *head)
{
listint_t *lead;

while (head)
{
lead = head->next;
free(head);
head = lead
}
}
