#include <main.h>
/**
 *print_alphabet - print a to z
 *
 *Return: void
 */
void print_alphabet(void)
{
	char alphabet;
	/*blank line*/
	for (alphabet = 'a', alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	putchar('\n');
}
