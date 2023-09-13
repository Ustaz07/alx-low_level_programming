#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: pointer to new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *cpyname, *cpyowner;
	int len_name, len_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	len_name = strlen(name);
	len_owner = strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	cpyname = malloc(len_name + 1);
	if (cpyname == NULL)
	{
		free(ndog);
		return (NULL);
	}
	strcpy(cpyname, name);

	cpyowner = malloc(len_owner + 1);
	if (cpyowner == NULL)
	{
		free(ndog);
		free(cpyname);
		return (NULL);
	}
	strcpy(cpyowner, owner);

	ndog->name = cpyname;
	ndog->age = age;
	ndog->owner = cpyowner;

	return (ndog);
}

