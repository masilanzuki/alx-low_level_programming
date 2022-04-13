#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - perform an operation onn 2 numbers.
 * @argc: number fo arguments.
 * @argv: arguments vector.
 * Return: 0 (success).
 **/
int main(int argc, char *argv[])
{
int a, b, res;
int (*f)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
f = get_op_func(argv[2]);
if (f == NULL)
{
printf("Error\n");
exit(99);
}
res = f(a, b);
printf("%d\n", res);
return (0);
}

