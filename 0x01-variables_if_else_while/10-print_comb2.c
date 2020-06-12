#include <stdio.h>
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = j = 48; i < 58; i++)
	{
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if ((i + j) != 114)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		j = 48;
	}
	putchar('\n');
	return (0);
}
