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
 * puts_half - main
 * @str: char
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int middle;
	int activador = 0;

	if (len % 2 == 0)
	{
		middle = len / 2;
	}
	else if (len % 2 != 0)
	{
		middle = len - 1;
		middle = middle / 2;
		activador = 1;
	}

	while (str[middle] != '\0')
	{
		_putchar(str[middle]);
		middle++;
	}
	if (activador == 1)
	{
		str[middle] = '\0';
	}
	_putchar('\n');
}
