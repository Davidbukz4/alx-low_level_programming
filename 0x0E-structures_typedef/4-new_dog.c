#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new struct of type dog
 * @name: struct parameter name
 * @age: struct parameter age
 * @owner: struct parameter owner
 * Return: pointer to buffer of datatype dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len, x;
	dog_t robby;

	name_len = owner_len = 0;
	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	robby = malloc(sizeof(dog_t));
	if (robby == NULL)
		return (NULL);

	robby->name = malloc(name_len * sizeof(robby->name));
	if (robby == NULL)
		return (NULL);
	for (x = 0; x < name_len; x++)
		robby->name[x] = name[x];

	robby->age = age;

	robby->owner = malloc(owner_len * sizeof(robby->owner));
	if (robby == NULL)
		return (NULL);

	for (x = 0; x < owner_len; x++)
		robby->owner[x] = owner[x];

	return (robby);
}
