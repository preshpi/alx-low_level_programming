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
int c = 0;
while (c < 10)
{
		putchar(48 + c);
c++;
}
putchar('\n');
return (0);
}
