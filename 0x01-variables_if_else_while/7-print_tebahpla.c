#include <stdio.h>

/**
 *main - prints the lowercase alphabet in reverse
 *@void: Empty parameter list for main
 *
 *Description: uses a for loop and putchar
 *Can only use putchar
 *
 *Return: 0 for success
 */

int main(void)
{
char a;
for (a = 'z'; a >= 'a'; a--)
putchar(a);
putchar('\n');
return (0);
}
