#include "holberton.h"
/**
 * _strpbrk - main
 * @s: char
 * @accept: char
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp = accept;
	int activator = 0, j = 0;

	while (s[j])
	{
		activator = 0;
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
			j++;
			continue;
		}
		++s;
		accept = temp;
	}
	return (s);
}
