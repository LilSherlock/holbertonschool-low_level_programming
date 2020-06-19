#include "holberton.h"
/**
 * _isdigit - main
 * @c: caracter
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 60)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
