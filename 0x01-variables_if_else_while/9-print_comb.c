#include <stdio.h>
/**
 * main - this is my entry point
 *
 * Return: I return a (0)
 *
 */
int main(void)
{
	int number;
        /*blank*/
	for(number = 0; number < 9; number++)
	{
		putchar(number + '0');
		putchar(',');
		putchar(' ');
	}
	putchar(9 + '0');
	return (0);
}
