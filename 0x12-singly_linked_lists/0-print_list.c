#include "lists.h"
/**
 * print_list - main
 * @h: list_t
 * Return: always x
 */
size_t print_list(const list_t *h)
{
	const list_t *p = h;
	int x = 0;

	if (p->str == NULL)
	{
		printf("[0] (nil)\n");
		p = p->next;
		x++;
	}
	if (p->str)
	{
		while (p != NULL)
		{
			printf("[%d] %s\n", p->len, p->str);
			p = p->next;
			x++;
		}
	}
	return (x);
}
