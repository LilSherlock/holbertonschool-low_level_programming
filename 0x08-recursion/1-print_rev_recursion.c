#include "holberton.h"
/**
 * _print_rev_recursion - main
 * @s: char
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	if (*s != '\0')
	{
		_putchar(*s);
	}
}
