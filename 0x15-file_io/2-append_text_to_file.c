#include "holberton.h"
/**
 * append_text_to_file - main
 * @filename: char
 * @text_content: char
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, writ = 0, x = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[x] != '\0')
			x++;
		writ = write(fd, text_content, x);
	}
	if (writ == -1 || writ != x)
		return (-1);
	close(fd);
	return (1);
}
