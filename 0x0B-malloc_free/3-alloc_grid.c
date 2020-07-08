#include "holberton.h"
/**
 * alloc_grid - main
 * @width: int
 * @height: int
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **buffer = NULL, i = 0, x = 0;

	if (width < 0 || width == 0 || height < 0 || height == 0)
		return (NULL);
	buffer = malloc(height * sizeof(int *) + 1);
	if (buffer == NULL)
		return (NULL);
	while (x < height)
	{
		buffer[x] = malloc(width * sizeof(int) + 1);
		if (buffer[x] == NULL)
			return (NULL);
		i = 0;
		while (i < width)
		{
			buffer[x][i] = 0;
			i++;
		}
		x++;
	}
	return (buffer);
}
