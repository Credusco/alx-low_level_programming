#include "dog.h"
#include "stdlib.h"

/**
 * fre_dog - free dogs
 * @d: The dog to be freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
