#include <stdlib.h>
#include "dog.h"
/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d : char pointer
 * @name : char pointer
 * @age : float pointer
 * @owner : char pointer
 * Return : nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
