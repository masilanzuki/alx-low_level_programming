#include "main.h"
/**
 *_abs - wirtes the absolute value of a number.
 *@n: the number to be written.
 *Return: (abs (n)).
 */
int _abs(int n)
{
  if (n < 0)
    {
      n = n * -1;
    }
  return (n);
}
