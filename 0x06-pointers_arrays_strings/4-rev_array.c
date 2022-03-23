#include "main.h"
/**
 * reverse_array - reverse array content
 * @a: array of integers.
 * @n: number of elements to swap
 *
 */
void reverse_array(int *a, int n)
{
int i, j, k;
j = n - 1;
for (i = 0; i < n / 2; i++)
{
k = a[i];
a[i] = a[j];
a[j] = k;
j--;
}
}
