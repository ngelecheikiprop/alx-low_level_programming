/**
 * _putchar - function to print characters
 *
 *Return: nothing is returned
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
/**
 * main - this is the entry point
 *
 *Return: I will return a 0
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
}
