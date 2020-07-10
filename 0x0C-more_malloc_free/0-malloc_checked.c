#include "holberton.h"
/**
 * malloc_checked - main
 * @b: int
 * Return: n
 */
void *malloc_checked(unsigned int b)
{
	void *buffer;

	buffer = malloc(b);
	if (buffer == NULL)
		exit(98);
	return (buffer);
}
