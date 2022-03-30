#include "main.h"

/**
 *_strlen - length of s.
 *@s: string.
 *@i: counter.
 *Return: int.
 */

int _strlen(char *s, int i)
{
	if (s[i])
	{
		i++;
		return (_strlen(s, i));
	}
	return (i);
}

/**
 *isPal - check if a string is palindrome.
 *@s: string.
 *@t: number of the first char of s.
 *@k: number of the last char of s.
 *Return: int.
 */

int isPal(char *s, int t, int k)
{
	if (t == k)
		return (1);

	if (s[t] != s[k])
		return (0);

	if (t < k + 1)
		return (isPal(s, t + 1, k - 1));

	return (1);
}

/**
 *is_palindrome - verify if a string is palindrome.
 *@s: string.
 *Return: 1 if true & 0 if false.
 */

int is_palindrome(char *s)
{
	int n = _strlen(s, 0);

	if (n == 0)
		return (1);
	return (isPal(s, 0, n - 1));
}
