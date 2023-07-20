#include "main.h"
/**
*print_square - prints a square, followed by a new line.
*
*Return: function of no return
*/
void print_square(int size)
{
	int i;/*counter*/
	int j;/*inner counter*/

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
