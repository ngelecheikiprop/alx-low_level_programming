#include <stdio.h>
/**
 * main - this is the entry point
 *
 * Return: returns(0)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
