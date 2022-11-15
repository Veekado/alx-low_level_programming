#include "dog.h"

/**
*init_dog - a function that initialize a variable of type struct dog
*@d: a pointer to a struct
*@name: char type
*@age: type float
*@owner: char type
*
*Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d != NULL)
		{
			d->name = name;
			d->age = age;
			d->owner = owner;
		}
		else
				return;
}


