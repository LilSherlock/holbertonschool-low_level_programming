#include <stdio.h>
/**
* main - adasdasdas dmain
* Return: 0
*/
int main(void)
{
	int counter = 1;

	while (counter < 101)
	{
		if (counter % 5 != 0 && counter % 3 != 0)
		{
			printf("%d", counter);
		}
		else if (counter % 5 == 0 && counter % 3 == 0)
		{
			printf("FizzBuzzsss");
		}
		else if (counter % 5 == 0)
		{
			printf("Buzz");
		}
		else if (counter % 3 == 0)
		{
			printf("Fizz");
		}
		if (counter < 100)
			putchar(' ');
		counter++;
	}
	putchar('\n');
	return (0);
}
