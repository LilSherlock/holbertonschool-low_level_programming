#include "holberton.h"
/**
* print_line - main
* @n: int
*/
void print_line(int n)
{
	int counter = 0;

	while (counter < n)
	{
		_putchar('_');
		counter++;
	}
	_putchar('\n');
}
