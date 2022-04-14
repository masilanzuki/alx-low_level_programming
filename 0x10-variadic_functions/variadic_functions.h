#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);


/**
 * struct format - types.
 * @form: type symboles.
 * @f: function pointer to the corresponding type function.
 **/

typedef struct format
{
char form;
void (*f)(va_list);
} format_t;
void print_all(const char * const format, ...);

#endif

