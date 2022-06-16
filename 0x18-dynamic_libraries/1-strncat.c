#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * @n: number of iterations
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c;
	int d;

	c = 0;
	while (dest[c] != 0)
	{
		c++;
	}

	d = 0;
	while (src[d] != 0 && d < n)
	{
		dest[c] = src[d];
		c++;
		d++;
	}

	return (dest);
}
