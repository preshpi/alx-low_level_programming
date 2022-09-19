#include "main.h"
/**
 * _strlen - function that return the length of a string
 * @s: The number being tested
 * Return: 0
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
