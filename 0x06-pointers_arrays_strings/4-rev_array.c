#include "holberton.h"
/**
 * reverse_array - main
 * @a: int
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int x = 0, top = 0, aux = 0;

	top = n - 1;
	while (x < n / 2)
	{
		aux = a[x];
		a[x] = a[top];
		a[top] = aux;
		top--;
		x++;
	}
}
