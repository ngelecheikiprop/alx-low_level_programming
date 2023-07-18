#include <main.h>
/**
 *print_alphabet_x10
 *
 *Return: void return
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i;
	/*blank line*/
	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
