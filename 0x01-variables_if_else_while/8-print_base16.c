#include <stdio.h>
/**
 * main - this is a entry point
 *
 * Return: always returns (0)
 */

int main(void)
{
	int hex;
	/*blannk*/
	for (hex=0; hex < 16; hex++)
	{
		if (hex < 10)
			putchar(hex + '0');
		else
			putchar('a' + (hex - 10));
	}
	putchar('\n');
	return (0);
}
