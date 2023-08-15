#ifndef DOG.H
#define DOG_H


#include <stdio.h>
#include "dog.h"

/**
 * main - checks the code
 *
 * Return: 0
 */
int main(void)
{
	struct dog my_dog;

	my_dog.name = "poppy";
	my_dog.age = 4;
	my_dog.owner = "Bob";
	printf("My name is %s, and I am %d : - Woof!\n", my_dog.name, my_dog.age);
	return (0);

#endif
}
