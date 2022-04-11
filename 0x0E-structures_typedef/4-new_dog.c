#include "dog.h"
#include <stdlib.h>

/**
 * copy -copy a string.
 * @x: string address (destination).
 * @y: string address (source).
 * Return: string address.
 */

char *copy(char *x, char *y)
{
int i;
for (i = 0; y[i] != '\0'; i++)
x[i] = y[i];
x[i] = '\0';
return (x);
}
/**
 * new_dog - create new dog.
 * @name:string address (dog name).
 * @age: float (dog age).
 * @owner: string address (dog owner).
 * Return: address of new string.
 */
dog_t *new_dog(char *name, float *age, char *owner)
{
dog_t *str;
str = malloc(sizeof(dog_t));
if (str == NULL)
return (NULL);
str->name = malloc(sizeof(name) + 1);
if (str->name == NULL)
{
free(str->name);
free(str);
}
str->age = *age;
str->name = (copy(str->name, name));
str->owner = (copy(str->owner, owner));
return (str);
}
