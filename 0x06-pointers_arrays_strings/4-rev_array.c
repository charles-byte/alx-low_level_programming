#include "holberton.h"

/**
 * reverse_array - reverse the array
 * @a: array of int
 * @n: size of array
 * Return: nothing
 **/

void reverse_array(int *a, int n)
{
int i, k;

i = 0;

for (i = 0; i < n; i++)
{
k = a[n - 1];
a[n - 1] = a[i];
a[i] = temp;
n--;
}
}
