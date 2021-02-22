#include "holberton.h"

/**
 *_memset - fills memory with constatnt byte
 *@n: number of bytes
 *@s: pointer to memory
 *@b: constant
 *Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
while (n > 0)
{
s[i] = b;
i++;
n--;
}
return (s);
}
