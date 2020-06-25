#include "holberton.h"
/**
 * cap_string - main
 * @s: char
 * Return: char
 */
char *cap_string(char *s)
{
	int activador = 0, x = 0;

	while (s[x] != '\0')
	{
		if (activador == 1)
		{
			if (s[x] >= 'a'  && s[x] <= 'z')
			{
				s[x] = s[x] - 32;
			}
			activador = 0;
		}
		if (s[x] == 32 || s[x] == 9 || s[x] == 10
		|| s[x] == 44 || s[x] == 59 || s[x] == 46
		|| s[x] == 33 || s[x] == 63 || s[x] == 34
		|| s[x] == 40  || s[x] == 41 || s[x] == 123 || s[x] == 125)
		{
			activador = 1;
		}
		x++;
	}
	return (s);
}
