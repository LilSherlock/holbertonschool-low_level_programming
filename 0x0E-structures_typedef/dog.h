#ifndef HOLBY
#define HOLBY
/**
 * struct dog - dog
 * @name: char
 * @age: float
 * @owner: char
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
void free_dog(dog_t *d);
#endif