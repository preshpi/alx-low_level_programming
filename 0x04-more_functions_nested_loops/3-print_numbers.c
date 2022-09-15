#include "main.h"

/**
 * print_numbers - entry point
 *
 * Description: prints the numbers with _putchar
 *
 * Return: void
 */

void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
