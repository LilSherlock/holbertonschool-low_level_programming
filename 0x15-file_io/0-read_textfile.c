#include "holberton.h"
/**
 * read_textfile - main
 * @filename: char
 * @letters: size_t
 * Return: 1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buff[letters];
	int fd = open(filename, O_RDONLY);
	int x;

	if (fd == -1 || filename == NULL)
		return (0);

	x = read(fd, buff, letters);
	close(fd);
	if (x == 0)
		return (0);
	printf("%s", buff);
	return (1);
}
