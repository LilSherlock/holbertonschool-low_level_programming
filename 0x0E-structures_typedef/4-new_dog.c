#include <stdlib.h>
#include "dog.h"
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
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int x, y;
	dog_t *dog;
	unsigned int lengA = _strlen(name) + 1;
	unsigned int lengB = _strlen(owner) + 1;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * lengA);
	dog->owner = malloc(sizeof(char) * lengB);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (x = 0; x < lengA; x++)
		dog->name[x] = name[x];
	dog->age = age;
	for (y = 0; y < lengB; y++)
		dog->owner[y] = owner[y];
	return (dog);
}
