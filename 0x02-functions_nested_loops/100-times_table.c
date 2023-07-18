#include "main.h"
/**
 *print_times_table - this is a description
 *@n: number
 *
 *Return: nunber returned
 */
void print_times_table(int n)
{
	int i;
	int j;
	int mul;
	/*blank line*/
	if (n <= 15)
	{
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			mul = i * j;
			_putchar(',');
			if (mul >= 1000)
				_putchar(mul / 1000 + '0');
			else
				_putchar(' ');
			if (mul >= 100)
				_putchar((mul / 100) % 10 + '0');
			else
				_putchar(' ');
			if (mul >= 10)
				_putchar((mul / 10) % 10 + '0');
			else
				_putchar(' ');
			_putchar(mul % 10 + '0');
		}
		_putchar('\n');
	}
	}
}
