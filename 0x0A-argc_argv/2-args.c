#include <stdio.h>
/**
 * main - main
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	argc = 0;

	while (argv[argc])
	{
		printf("%s\n", argv[argc]);
		argc++;
	}
	return (0);
}
