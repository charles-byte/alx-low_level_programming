#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @src: second string to copy from
 * @dest: string to be overwritten
 * Return: pointer to dest
 **/

char *_strcat(char *dest, char *src)
{
int i, k;

i = 0;

while (dest[i] != '\0')
i++;

for (k = 0; src[k] != '\0'; k++)
{
dest[i] = src[k];
i++;
}

dest[i] = src[k];

return (dest);
}
