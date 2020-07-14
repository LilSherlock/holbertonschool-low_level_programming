#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - main
 * @d: dog_t
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		d->age = 0;
		free(d->owner);
		free(d);
	}
}
