#include "main.h"

/**
 * prime - tests if int is divisible by i.
 * @n: integer.
 * @i:counter.
 * Return: int.
 */
int prime(int i, int n)
{
if (i == n)
return (1);
else if (n % i == 0)
return (0);
return (prime(i + 1, n));
}
/**
 * is_prime_number - checks is int is prime number.
 * @n: integer.
 * Return: int.
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (prime(2, n));
}
