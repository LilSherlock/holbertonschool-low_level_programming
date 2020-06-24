#include "holberton.h"
/**
 * print_rev - main
 * @s: char
 */
void print_rev(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	while (s[j] >= 0)
	{
		_putchar(s[j]);
		j--;
	}

	_putchar('\n');
}
