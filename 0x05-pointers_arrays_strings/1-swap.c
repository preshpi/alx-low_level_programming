#include "main.h"
/**
 * swap_int - write a function that swaps the value of two integers
 * @a: The first integer
 * @b: The second interger
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int a;
	int b;

	a = 98;
	b = 42;
	_putchar('a=%d, b=%d\n', a, b);
	swap_int(&a, &b);
	_putchar('a=%d, b=%d\n', a, b);
return (0);
}
