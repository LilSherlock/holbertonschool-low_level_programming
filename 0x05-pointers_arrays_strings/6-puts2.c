#include "holberton.h"
/**
 * puts2 - main
 * @str: char
 */
void puts2(char *str)
{
	unsigned int x = 0;

	while (str[x])
	{
		if (str[x] % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
