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
 * _strncat - main
 * @dest: char
 * @src: char
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int aLength = _strlen(dest);
	int counter = 0;

	while (counter < n)
	{
		if (src[counter] == '\0')
		{
			return (dest);
		}
		dest[aLength] = src[counter];
		aLength++;
		counter++;
	}
	return (dest);
}
