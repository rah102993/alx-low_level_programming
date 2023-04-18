#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: string.
 * Return: string length.
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
/**
 * *_strcpy - a function that copies the string.
 * @a: pointer.
 * @b: string.
 * Return: the pointer to a.
 */
char *_strcpy(char *a, char *b)
{
	int i, j;

	i = 0;

	while (b[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		a[j] = b[j];
	}
	a[j] = '\0';

	return (a);
}
/**
 * new_dog - a function that creates a new dog.
 * @name: dog name.
 * @age: age.
 * @owner: dog owner.
 * Return: pointer to new dog (Success), if not, NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);
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
