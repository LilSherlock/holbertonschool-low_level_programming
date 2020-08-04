#include "holberton.h"
/**
 * create_file - name
 * @filename: char
 * @text_content: char
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, writting = 0, x = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[x] != '\0')
			x++;
		writting = write(fd, text_content, x);
	}
	if (writting == -1 || writting != x)
		return (-1);
	close(fd);
	return (1);
}
