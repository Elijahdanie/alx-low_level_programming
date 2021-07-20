#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - This creates a new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of the dog
  *
  * Return: returns a pointer to the new dog struct
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdogstruct;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		newdogstruct = malloc(sizeof(dog_t));

		if (newdogstruct == NULL)
			return (NULL);

		newdogstruct->name = malloc(sizeof(char) * name_l);

		if (newdogstruct->name == NULL)
		{
			free(newdogstruct);
			return (NULL);
		}

		newdogstruct->owner = malloc(sizeof(char) * own_l);

		if (newdogstruct->owner == NULL)
		{
			free(newdogstruct->name);
			free(newdogstruct);
			return (NULL);
		}

		newdogstruct->name = _strcpy(newdogstruct->name, name);
		newdogstruct->owner = _strcpy(newdogstruct->owner, owner);
		newdogstruct->age = age;
	}

	return (newdogstruct);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
