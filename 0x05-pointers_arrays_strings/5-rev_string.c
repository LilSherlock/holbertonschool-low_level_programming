#include "holberton.h"
/**
 * rev_string - main
 * @s: char
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	char aux;
	int loop = 0, top = 0, subLen = 0, middleLen = 0;

	subLen = len - 1;
	middleLen = subLen / 2;
	top = subLen;
	while (loop < middleLen + 1)
	{
		aux = s[loop];
		s[loop] = s[top];
		s[top] = aux;
		loop++;
		top--;
	}
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
