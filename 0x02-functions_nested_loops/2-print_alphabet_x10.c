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
	char i;
	for (i = 0; lower < 9; i++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		_putchar(lower);
	}
_putchar('\n');
}
