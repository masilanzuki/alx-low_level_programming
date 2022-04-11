#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print the elements of variable of type struct dog.
 * @d: variable to print it's elements.
 *
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name != NULL)
printf("Name: %s", d->name);
else
printf("Name: (nil)");

printf("\n");
printf("Age: %f", d->age);
printf("\n");
if (d->owner != NULL)
printf("Owner: %s", d->owner);
else
printf("Owner: (nil)");
printf("\n");
}
}
