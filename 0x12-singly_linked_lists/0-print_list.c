#include "lists.h"
/**
 * print_list - main
 * @h: list_t
 * Return: always x
 */
size_t print_list(const list_t *h)
{
	unsigned int x = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		x++;
	}
	return (x);
}
