#include "holberton.h"
/**
 * create_array - main
 * @size: int
 * @c: char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x = 0;
	char *buffer;

	if (size == 0)
	{
		return (NULL);
	}
	buffer = malloc(size * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	while (x < size)
	{
		buffer[x] = c;
		x++;
	}
	return (buffer);
}
