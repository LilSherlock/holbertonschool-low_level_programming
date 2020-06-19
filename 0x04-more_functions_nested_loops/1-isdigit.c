#include "holberton.h"
/**
 * _isdigit - checks for digits
 * Return: 1 if digit 0 otherwise
 * @c: number to be proccesed
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 60)
	{
		return (1);
	}
	else
		return (0);
}
