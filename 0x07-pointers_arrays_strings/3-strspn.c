#include "holberton.h"
/**
 * _strspn - main
 * @s: char
 * @accept: char
 * Return: sum
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0, j = 0, sum = 0;

	while (s[x] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[x])
			{
				sum++;
				break;
			}
			j++;
		}
		if (!accept[j])
		{
			break;
		}
		x++;
	}
	return (sum);
}
