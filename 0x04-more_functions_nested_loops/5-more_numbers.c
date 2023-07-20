#include "main.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14,
 *
 *Return: function of no return
 */
void more_numbers(void)
{
	int i;/*this is my counter*/
	int n;/*numbers I print*/
	/*blank line*/
	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 10)
				_putchar(n / 10 + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
