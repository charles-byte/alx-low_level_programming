#include "holberton.h"
#include <stdio.h>

/**
 * main - test
 *
 * Description: print numbers 1 -100 replacing multiples of 3 & 5
 *
 * Return: zero
 **/

int main(void)
{
int k;

for (k = 1; k < 100; k++)
{
if (k % 3 == 0 && k % 5 == 0)
printf("FizzBuzz ");
else if (k % 3 == 0)
printf("Fizz ");
else if (k % 5 == 0)
printf("Buzz ");
else
printf("%d ", k);
}
printf("Buzz\n");
return (0);
}
