#include "lists.h"
/**
 * print_listint - main
 * @h: listint_t
 * Return: x
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x += 1;
		h = h->next;
	}
	return (x);
}
