#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 *@n: number
 *Return: function of no return
 */
void print_diagonal(int n)
{
	int i;/*counter*/
	int spaces;

	if (n <= 0)
	{
		/*print nothing*/
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		for (spaces = 0; spaces < (i + 1); spaces++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	}
}
