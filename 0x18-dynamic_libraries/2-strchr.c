#include "main.h"
/**
 * _strchr - locates a string
 * @s: string array
 * @c: string to locate
 *
 * Return: the address of the string
 *
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
