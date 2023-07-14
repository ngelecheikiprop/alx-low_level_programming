#include <stdio.h>
/**
 * main - this is the entry point
 *
 * Return: return(0)
 *
 */
int main(void)
{
	int lowerCase;
	int upperCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		putchar(lowerCase);
	for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
		putchar(upperCase);
	putchar('\n');
	return (0);
}
