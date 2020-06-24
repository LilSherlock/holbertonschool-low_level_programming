#include "holberton.h"
/**
 * _strcpy - main
 * @dest: char
 * @src: char
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
