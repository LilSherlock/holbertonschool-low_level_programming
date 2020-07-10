#include "holberton.h"
/**
* _strlen - main
* @s: char
* Return: j
*/
int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
/**
 * string_nconcat - main
 * @s1: char
 * @s2: char
 * @n: int
 * Return: buffer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, i = 0;
	unsigned int lenA = _strlen(s1);
	unsigned int lenB = _strlen(s2);
	char *buffer;

	if (n >= lenB)
	{
		n = lenB;
	}
	n = n + lenA;
	buffer = malloc(n * sizeof(char) + 1);
	if (buffer == NULL)
		return (NULL);
	while (x < n)
	{
		if (lenA > x)
		{
			buffer[x] = s1[x];
		}
		else
		{
			buffer[x] = s2[i];
			i++;
		}
		x++;
	}
	buffer[x] = '\0';
	return (buffer);
}
