#include <stdio.h>
/**
* main - print if the number is posutuve, zero, or negative
*
* Description: using the main description
* this program prints "Programming is positive, zero or negative
* Return: 0
*/
int main(void)
{
int c;
int d;
int e;
int f = 0;
while (f < 10)
{
e = 0;
while (e < 10)
{
d = 0;
while (d < 10)
{
c = 0;
while (c < 10)
{
if (!(f == c && e == d))
{
	putchar('0' + f);
	putchar('0' + e);
	putchar(' ');
	putchar('0' + d);
	putchar('0' + c);
if (!(f + e == 18 && c + d == 17 && d == 9))
{
	putchar(',');
	putchar(' ' );
}
}
c++;
}
d++;
}
e++;
}
f++;
}
putchar('\n');
return (0);
}
