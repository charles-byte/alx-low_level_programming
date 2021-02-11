#include "holberton.h"

/**
 * print_most_numbers - prints numbers, skipping some
 *
 *return: zero
 */
void print_most_numbers(void)
{
char i;

for (i = '0'; i <= '9'; i++)
{
if ((i == '2') || (i == '4'))
i++;
_putchar(i);
}
_putchar('\n');
}
