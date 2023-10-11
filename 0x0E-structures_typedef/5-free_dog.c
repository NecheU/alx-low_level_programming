#include "dog.h"

/**
 * free_dog - Function that frees dog
 * @d: pointer to the dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(dog->name);
		free(dog->owner);
		free(d);
	}
}
