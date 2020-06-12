#include <stdio.h>
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a >= 'a' && a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
