#include "dog.h"
/**
 * init_dog- mo
 * @d: m
 * @name: m
 * @age: m
 * @owner: m
 * Return: n
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
