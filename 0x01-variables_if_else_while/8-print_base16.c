#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints base 16
 * @void: Empty parameter list for main.
 *
 * Description: Prints all hexadecimals
 *
 * Return: 0 for success
 */
int main(void)
{
int n;
char a;

for (n = 48; n < 58; n++)
putchar(n);
for (a = 'a'; a < 'g'; a++)
putchar(a);
putchar('\n');
return (0);
}
