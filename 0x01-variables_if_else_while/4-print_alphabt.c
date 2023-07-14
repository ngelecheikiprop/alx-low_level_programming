#include <stdio.h>
/**
 * main - this is the entry point
 *
 * Return: always returns 0
 */
int main(void)
{
	char lowerCase;
	for ( lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		if (lowerCase == 'q')
		{
			continue;
		}
		if (lowerCase == 'e')
		{
			continue;
		}
		putchar(lowerCase);
	}
	putchar('\n');
	return (0);
}
