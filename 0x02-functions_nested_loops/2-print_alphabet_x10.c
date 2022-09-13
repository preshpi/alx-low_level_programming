#include "main.h"
/**
 *
 * print_alphabet_x10
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char lower;
	for (lower = 0; lower < 10; lower++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		_putchar(lower);
	}
_putchar('\n');
}
