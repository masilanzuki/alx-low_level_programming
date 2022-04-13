#include "function_pointers.h"

/**
 * int_index - search for the position of
 * an element in an array the meets condition cmp function.
 * @array: array address.
 * @size: array size.
 * @cmp: address of function called.
 * Return: integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array && cmp && size > 0)
{
for (; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
return (-1);
}

