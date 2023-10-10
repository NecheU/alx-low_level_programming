#include "dog.h"

/**
 * _strlen -Returns the length of a string
 * @s: the string to be checked
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * _strcpy - Copies the string pointed to by src
 * together with the '\0, to the buffer pointed to by dest
 * @src: string to be copied
 * @dest: pointer to the buffer where the string will be cooied to
 *
 * Return: pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, b;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (b = 0; b < len; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: name of the new dog
 * @owner: owner of the new dog
 * @age: age if the new dog
 *
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int c, d;

	c = _strlen(name);
	d = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (c + 1));
	{
		if (dog->name == NULL)
			free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (d + 1));
	{
		if (dog->owner == NULL)
			free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
