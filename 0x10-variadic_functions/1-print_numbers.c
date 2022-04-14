#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers.
 * @separator: separate numbers.
 * @n: number of arguments.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
int number;
va_start(args, n);
for (; i < n; i++)
{
number = va_arg(args, int);
printf("%d", number);
if (separator && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}

