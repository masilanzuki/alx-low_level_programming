#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: first string
 * @src: secong string
 * @n: number of bytes to copy.
 * Return: string.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (n > j)
{
if (src[j] == '\0')
{
for (; j < n; j++)
{
dest[i] = '\0';
i++;
}
}
else
{
dest[i] = src[j];
j++;
i++;
}
}
return (dest);
}
