#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: parameter passed to the function
 *
 * Return: the length of the string (Integer)
 *
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
