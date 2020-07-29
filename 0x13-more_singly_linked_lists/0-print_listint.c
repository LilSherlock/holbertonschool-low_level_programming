#include "lists.h"
/**
 * print_listint - main
 * @h: listint_t
 * Return: x
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	for (; h; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (x);
}
