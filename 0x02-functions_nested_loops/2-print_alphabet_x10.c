#include "holberton.h"
/**
 * print_alphabet_x10 - main
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int x = 0;

	while (x < 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		x++;
		a = 'a';
		_putchar('\n');
	}
}
