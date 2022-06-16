#include "main.h"
/**
 * _puts - prints a string, followed by a newline
 * @str: the string
 *
 * Return: void
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}

	_putchar('\n');
}
