#include "holberton.h"
/**
 * print_array - main
 * @a: int
 * @n: int
 */
void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		if (x < n - 1)
		{
			printf("%d, ", a[x]);
		}
		else if (x < n)
		{
			printf("%d", a[x]);
		}
		x++;
	}
	printf("\n");
}
