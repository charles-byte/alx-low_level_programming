#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints 0-9 in ascending order
 * @void: Empty parameter list for main.
 *
 * Description: Writes 0-9 with comma and space
 *
 * Return: 0 for success
 */
int main(void)
{
int i = 48;

while (i < 58)
{
putchar(i);
if (i < 57)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
