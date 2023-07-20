#include "main.h"
/**
 *print_line - draws a straight line in the terminal
 *@n: number
 *
 *Return: function of no return
 */
void print_line(int n)
{
	int i;/*counter*/

	if (n <= 0)
	{
		/*print nothing*/
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	}
	_putchar('\n');
}
