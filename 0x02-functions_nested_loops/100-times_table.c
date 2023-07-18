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
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			mul = i * j;
			_putchar(',');
			_putchar(mul / 1000 + '0');
			_putchar((mul / 100) % 10 + '0');
			_putchar((mul / 10) % 10 + '0');
			_putchar(mul % 10 + '0');
		}
		_putchar('\n');
	}
}
