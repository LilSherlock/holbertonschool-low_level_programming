#include "holberton.h"
/**
* print_diagonal - main
* @n: int
*/
void print_diagonal(int n)
{
	int bar = 0, tip = 0, top = 0, slash = 92;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	while (bar < n)
	{
		while (tip < top)
		{
			_putchar(' ');
			tip++;
		}
		tip = 0;
		top++;
		if (top > 0)
		{
			_putchar(slash);
		}
		_putchar('\n');
		bar++;
	}
}
