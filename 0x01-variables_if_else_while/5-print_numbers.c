#include <stdio.h>
/**
 * main - entry point of program
 *
 * Return: always returns(0)
 */
int main(void)
{
	int n;
	/*blank line*/
	for (n = 0; n < 10; ++n)
	{
		putchar(n+'0');
	}
	putchar('\n');
	return (0);
}
