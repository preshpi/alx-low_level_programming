#include <stdio.h>
/**
* main - print if the number is positive, zero, or negative
*
* Description: using the main description
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
int x = 0;
while (x < 10)
{
	putchar(x + '0');
if (x < 9)
{
putchar(' ');
}
x++;
}
putchar('\n');
return (0);
}
