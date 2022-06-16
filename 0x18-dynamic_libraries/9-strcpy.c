#include "main.h"
/**
 * _strcpy - copies the string
 * @dest: array that gets returned
 * @src: the pointer that receive the string
 *
 * Return: the parameter dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
