#include "holberton.h"
/**
 * _calloc - main
 * @nmemb: int
 * @size: int
 * Return: buffer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buffer;
	unsigned int x = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	buffer = malloc(nmemb * size);
	if (buffer == NULL)
		return (NULL);
	while (x < nmemb * size)
	{
		buffer[x] = 0;
		x++;
	}
	return (buffer);
}
