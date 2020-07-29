#include "lists.h"
/**
 * add_nodeint_end - main
 * @head: listin_t
 * @n: int
 * Return: new
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *p;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	p = *head;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = new;
	return (new);
}
