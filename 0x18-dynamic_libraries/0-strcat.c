#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: input parameter string
 * @src: input parameter string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int c;
	int d;

	c = 0;
	while (dest[c] != 0)
	{
		c++;
	}
	d = 0;
	while (src[d] != 0)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	return (dest);
}
