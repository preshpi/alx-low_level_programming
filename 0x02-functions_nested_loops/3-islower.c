#include "main.h"
/**
 * _islower - Print a function for lowercase
 * @c: is the int that will use for the argument of the function
 * Description: int _islower(int c)
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);

}
