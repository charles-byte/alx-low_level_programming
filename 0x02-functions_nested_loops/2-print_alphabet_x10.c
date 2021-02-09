#include "holberton.h"


/**
 * print_alphabet - prints lower case alphabet
 *
 **/

void print_alphabet(void)
{

char i;

for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}

/**
 * print_alphabet_x10 - prints aphabet 10 times
 *
 **/
void print_alphabet_x10(void)
{

int d;

for (d = '0'; d <= '9'; d++)
{
print_alphabet();
}
}
