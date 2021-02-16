#include "holberton.h"

/**
 * puts2 - writes every other character
 * @str: input string to print
 * Return: nothing
 **/

void puts2(char *str)
{
int k, m;

k = 0;
m = 0;

while (str[k] != '\0')
{
k++;
}

while (m < k)
{
_putchar(str[m]);
m += 2;
}
_putchar('\n');
}
