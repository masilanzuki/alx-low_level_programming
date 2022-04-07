#include "main.h"
#include <stdlib.h>
/**
 * array_range - array that contains numbers
 * from min - max.
 *
 * @min: first number.
 * @max: last number.
 * Return: pointer to array.
 */
int *array_range(int min, int max)
{
int i, nb_el, nb;
int *t;
if (min > max)
return (NULL);
nb_el = max - min + 1;
t = malloc(sizeof(int) * nb_el);
if (t == NULL)
return (NULL);
nb = min;
for (i = 0; i < nb_el; i++)
{
t[i] = nb;
nb++;
}
return (t);
}
