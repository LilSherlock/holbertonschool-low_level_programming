#include <stdio.h>
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	char a = 'a', A = 'A';

	while (a >= 'a' && a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A >= 'A' && A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
