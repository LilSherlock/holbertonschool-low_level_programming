#include "holberton.h"
/**
 * _strlen_recursion - main
 * @s: char
 * Return: f
 */
int _strlen_recursion(char *s)
{
	static int f;

	if (*s != '\0')
	{
		f++;
		_strlen_recursion(++s);
	}
	return (f);
}
