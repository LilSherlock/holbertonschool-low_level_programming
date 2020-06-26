#include "holberton.h"
/**
 * rot13 - main
 * @s: char
 * Return: s
 */
char *rot13(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		while ((s[x] >= 'a' && s[x] <= 'z') ||
		(s[x] >= 'A' && s[x] <= 'Z'))
		{
			if ((s[x] >= 'N' && s[x] <= 'Z') ||
			(s[x] >= 'n' && s[x] <= 'z'))
			{
				s[x] -= 13;
			}
			else
			{
				s[x] += 13;
			}
			x++;
		}
		x++;
	}
	return (s);
}
