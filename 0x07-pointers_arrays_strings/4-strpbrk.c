#include "holberton.h"
/**
 * _strpbrk - main
 * @s: char
 * @accept: char
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int activator = 0;
	char *temp = accept;

	while (*s)
	{
		accept = temp;
		while (*accept)
		{
			if (*s == *accept)
			{
				activator = 1;
				break;
			}
			accept++;
		}
		if (activator == 1)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
