#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}
}
