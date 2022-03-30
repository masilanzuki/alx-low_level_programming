#include "main.h"
/**
 * factorial - calculates factorials of int.
 * @n: number to be factored.
 * Return: n or -1 if n < 0.
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
