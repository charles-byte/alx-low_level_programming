#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints contents of array to stdout individually
 *
 * @a: array to print from
 * @n: number of array values of print
 * Return: void
 */

void print_array(int *a, int n)
{
int p;

p = 0;
while (p < n)
{
printf("%d", a[p]);
if (p != n - 1)
{
printf(", ");
}
p++;
}
printf("\n");
}
