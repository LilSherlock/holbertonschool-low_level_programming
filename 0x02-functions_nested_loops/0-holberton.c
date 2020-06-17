#include "holberton.h"
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	char a[] = "Holberton\n";
	int x = 0;

	while (a[x] != '\0')
	{
		_putchar(a[x]);
		x++;
	}
	return (0);
}
