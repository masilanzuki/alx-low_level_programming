#include "main.h"
/**
 * _strchr - locates c in string s.
 * @s: the string
 * @c: the character to locate in the string.
 * Return: character c if true.
 *
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
break;
i++;
}
if (s[i] == c)
return (s + 2);
return (0);
}
