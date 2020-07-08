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
 * argstostr - main
 * @ac: int
 * @av: char
 * Return: buffer
 */
char *argstostr(int ac, char **av)
{
	int x = 0, i = 0, sum = 0, aux = 0, j = 0;
	char *buffer;

	if (ac == 0 || *av == NULL)
		return (NULL);
	while (x < ac)
	{
		sum = _strlen(av[x]);
		aux = aux + sum + 1;
		sum = 0;
		x++;
	}
	buffer = malloc(aux * sizeof(char) + 1);
	if (buffer == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		aux = _strlen(av[x]);
		while (j < aux)
		{
			buffer[i] = av[x][j];
			i++;
			j++;
		}
		j = 0;
		buffer[i] = '\n';
		i++;
		x++;
	}
	buffer[i] = '\0';
	return (buffer);
}
