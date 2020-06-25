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
 * _strcat - main
 * @dest: char
 * @src: char
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int aLength = _strlen(dest);
	int counter = 0;

	while (src[counter] != '\0')
	{
		dest[aLength] = src[counter];
		aLength++;
		counter++;
	}
	return (dest);
}
