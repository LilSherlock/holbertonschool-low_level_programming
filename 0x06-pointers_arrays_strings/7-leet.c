#include "holberton.h"
/**
 * leet - main
 * @s: char
 * Return: s
 */
char *leet(char *s)
{
	int x = 0, a = 4, e = 3, o = 0, t = 7, l = 1;

	while (s[x] != '\0')
	{
		if (s[x] == 'a' || s[x] == 'A')
		{
			s[x] = '0' + a;
		}
		else if (s[x] == 'e' || s[x] == 'E')
		{
			s[x] = '0' + e;
		}
		else if (s[x] == 'o' || s[x] == 'O')
		{
			s[x] = '0' + o;
		}
		else if (s[x] == 't' || s[x] == 'T')
		{
			s[x] = '0' + t;
		}
		else if (s[x] == 'l' || s[x] == 'L')
		{
			s[x] = '0' + l;
		}
		x++;
	}
	return (s);
}
