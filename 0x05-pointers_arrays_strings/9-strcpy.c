#include "holberton.h"
/**
 * _strcpy - main
 * @dest: char
 * @src: char
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
