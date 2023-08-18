#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
/**
 * print_strings - prints the given strings
 * @separator: what goes between the strings
 * @n:the number of strings to print
 *
 * Return: nothing just prints
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *s;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(strings, n);
	s = va_arg(strings, char *);
	printf("%s", s);
	for (i = 1; i < n; i++)
	{
		s = va_arg(strings, char *);
		if (separator != NULL)
			printf("%s", separator);
		else
			(void)separator;
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
	}
	va_end(strings);
	printf("\n");
}
