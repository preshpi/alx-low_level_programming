#include "main.h"
/**
 * main - print the alphabet in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
_putchar('\n');
}
