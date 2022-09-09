#include <stdio.h>
#include <stdlib.h>
/**
* main - print if the number is positive, zero or negative
*
* Descriotion: using the main descripition
* this program prints "Programmminh is positive, zero, or nedative
*  Return: 0
*/
int main(void)
{
int c = 0;
while (c < 10)
{
	putchar(48 + c);
if (c != 9)
{
	putchar(',');
	putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
