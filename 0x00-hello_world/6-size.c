#include <stdio.h>
/**
 * main - where the program starts to run
 *
 * Return: returns a 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	puts("Size of a char: %lu byte(s)", (unsigned long)sizeof(c));
	puts("Size of a int: %lu byte(s)", (unsigned long)sizeof(i));
	puts("Size of a long int: %lu byte(s)", (unsigned long)sizeof(li));
	puts("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(lli));
	puts("Size of a float: %lu byte(s)", (unsigned long)sizeof(f));
	return (0);
}
