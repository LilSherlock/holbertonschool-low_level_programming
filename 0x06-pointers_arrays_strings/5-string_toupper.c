#include "holberton.h"
/**
 * string_toupper - main
 * @s: char
 * Return: s
 */
char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] >= 'a'  && s[x] <= 'z')
		{
			s[x] = s[x] - 32;
		}
		x++;
	}
	return (s);
}
