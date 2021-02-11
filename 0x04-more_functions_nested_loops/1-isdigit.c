#include "holberton.h"

/**
 *_isdigit - checks if digit
 *
 * @c: character to be checked
 *
 * Return: 0 if successful
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
return (0);
}
