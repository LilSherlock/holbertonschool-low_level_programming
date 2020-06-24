#include "holberton.h"
/**
 * print_rev - main
 * @s: char
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	len = len - 1;
	while (s[len] > 0)
	{
		_putchar(s[len]);
		len--;
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

