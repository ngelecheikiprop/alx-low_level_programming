#include "main.h"
/**
 *print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 *Return: function of no return
 */
void print_numbers(void)
{
	int i;
	/*blank*/
	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
	return;
}
