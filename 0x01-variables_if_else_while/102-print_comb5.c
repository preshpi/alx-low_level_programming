#include <stdio.h>
/**
* main - print if the number is positive, zero, or negative
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
int p, q;
for (p = 0; <= 98; p++)
{
	putchar((p / 10) + '0');
	putchar((p % 10) + '0');
	putchar(' ');
	putchar((q / 10) + '0');
	putchar((q % 10) + '0');
	if(p != 98 || q != 99)
	{
		putchar(',');
		putchar(' ');
	}
}
}
putchar('\n');
return (0);
}
