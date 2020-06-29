#include "holberton.h"
/**
 * _strspn - main
 * @s: char
 * @accept: char
 * Return: sum
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0, j = 0, sum = 1;

	while (accept[x] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (s[j] == accept[x])
			{
				sum++;
				break;
			}
			j++;
		}
		x++;
	}
	return (sum);
}
