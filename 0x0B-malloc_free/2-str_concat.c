#include "holberton.h"
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
/**
 * str_concat - main
 * @s1: char
 * @s2: char
 * Return: buffer
 */
char *str_concat(char *s1, char *s2)
{
	char *buffer;
	int lenA = 0, LenB = 0, x = 0, check = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lenA = _strlen(s1);
	LenB = _strlen(s2);
	lenA = lenA + LenB;

	buffer = malloc(lenA * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	while (x < lenA)
	{
		if (s1[x] == '\0')
		{
			check = 1;
		}
		if (check == 0)
		{
			buffer[x] = s1[x];
		}
		else if (check == 1)
		{
			buffer[x] = s2[i];
			i++;
		}
		x++;
	}
	return (buffer);
}
