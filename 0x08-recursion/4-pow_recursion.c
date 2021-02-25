#include "holberton.h"

/**
 * _pow_recursion -returns x raised to power y
 * @x: integer to be raised
 * @y: integr power
 * Return: value of x raised to power of y
 */

int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
if (y < 0)
return (-1);

return (x * _pow_recursion(x, y - 1));
}
