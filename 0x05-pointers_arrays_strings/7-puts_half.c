#include "holberton.h"
/**
 * puts_half - main
 * @str: char
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int middle;

	if (len % 2 == 0)
	{
		middle = len / 2;
	}
	else if (len % 2 != 0)
	{
		middle = len - 1;
		middle = middle / 2;
	}

	while (str[middle] != '\0')
	{
		_putchar(str[middle]);
		middle++;
	}
	_putchar('\n');
}

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