#include "main.h"
/**
 * _memset - insert n times the content of b into s.
 * @b: the string to insert
 * @n: the number of times to insert.
 * @s: the string to insert b in.
 * Return: string.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
