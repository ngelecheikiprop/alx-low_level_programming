#include "main.h"
/**
 *times_table - print the times 9 table
 *
 *Return: function of no return
 */
void times_table(void)
{
	int x;
	int y;
	int mul;
	/*blank line*/
	for (y = 0; y < 10; y++)
	{
		_putchar('0');
		for (x = 1; x < 10; x++)
		{
			mul = x * y;
			if (mul < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
