#include "main.h"
/**
 * main - print the alphabet in lowercase
 *
 * Description: Print lower followed by a new line
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
