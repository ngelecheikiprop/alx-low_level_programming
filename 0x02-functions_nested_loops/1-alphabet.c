/**including putcahr*/
int _putchar(char c);
void print_alphabet(void);
/**
 *print_alphabet - when called it will print the alphabet of the corresponding ascii character.
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
