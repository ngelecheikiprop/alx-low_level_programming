#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - prints the numbers given
 * @seperator: what to print in between
 * @n: number of the numbers to print
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(numbers, n);

	printf("%d", va_arg(numbers, int));
	for(i = 1; i < n; i++)
	{
		if (separator != NULL)
                        printf("%s", separator);
		printf("%d", va_arg(numbers, int));
	}
	va_end(numbers);
	printf("\n");
}
