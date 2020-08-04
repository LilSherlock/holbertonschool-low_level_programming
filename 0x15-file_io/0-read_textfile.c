#include "holberton.h"

/**
 * read_textfile - function with two arguments
 * @filename: name of the file
 * @letters: number of letters
 *
 * Description: reads a text file and prints
 * Return: 0 if filename is NULL or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int x = 0, fd = 0, output = 0;

	if (filename == NULL)
		return (0);
	buff = malloc(letters);

	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	x = read(fd, buff, letters);
	if (x == 0)
	{
		free(buff);
		return (0);
	}
	output = write(STDOUT_FILENO, buff, x);
	if (output == -1)
	{
		free(buff);
		exit(0);
	}
	close(fd);
	free(buff);
	return (output);
}
