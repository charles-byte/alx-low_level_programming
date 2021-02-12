#include "holberton.h"
#include <stdio.h>
/**
 * main - find & print prime numbers
 *
 * Description: find largest prime factor of 612852475143
 *
 * Return: zero
 **/

int main(void)
{
long int max, l, t;

max = 612852475143;
l = 2;
t = 2;

while (max > t)
{
if (max % t == 0)
{
l = t;
max = max / l;
t = l + 1;
}
else
t++;
}
printf("%ld\n", max);
return (0);
}
