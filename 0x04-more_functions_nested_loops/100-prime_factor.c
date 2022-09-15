#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long int number;

	number = 612852475143;

	if (isprime(number) == 1)
	{
		printf("%ld\n", number);
	}
	else
	{
		printf("%ld\n", biggestFactor(number));
	}
	return (0);
}
