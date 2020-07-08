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
 * _strdup - main
 * @str: char
 * Return: char
 */
char *_strdup(char *str)
{
	char *buffer;
	int length = 0, x = 0;

	if (str == NULL)
		return (NULL);
	length = _strlen(str);

	buffer = malloc(length * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	while (x < length)
	{
		buffer[x] = str[x];
		x++;
	}
	return (buffer);
}
