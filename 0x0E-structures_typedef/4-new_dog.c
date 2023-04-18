#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: string.
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - a function that copies the string pointed to.
 * @a: pointer.
 * @b: string.
 * Return: the pointer to a.
 */
char *_strcpy(char *a, char *b)
{
	int len, i;

	len = 0;

	while (b[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		a[i] = b[i];
	}
	a[i] = '\0';

	return (a);
}

/**
 * new_dog - a function that creates a new dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 * Return: pointer to the new dog (Success), else NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
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
