#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int y;

	y = 0;

	while (s[y] != '\0')
	{
		y++;
	}
	return (y);
}

/**
 * *_strcpy - Copies the string pointed to by src
 * including the terminating null
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer to copy to
 * @src: source to be copied from
 *
 * Return: pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int length, z;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (z = 0; z < length; z++)
	{
		dest[z] = src[z];
	}
	dest[z] != '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 *
 * Return: pointer to the new dog on SUCCESS, othewise, NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int a, b;

	a = strlen(name);
	b = strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (a + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (b + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
