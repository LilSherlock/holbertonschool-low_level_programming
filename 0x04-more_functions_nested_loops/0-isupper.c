#include "holberton.h"
/**
 * _isupper - main
 * @c: char value
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 89)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
