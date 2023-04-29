#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node or NULL if fail
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *new;
listint_t *lead = *head;

new = malloc(sizeof(listint_t));

if (!new)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (lead->next)
lead = lead->next;

lead->next = new;

return (new);

}
