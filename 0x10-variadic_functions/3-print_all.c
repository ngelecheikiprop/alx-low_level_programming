#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - prints everything all tyoes
 * @format: the sequnce to follow - cant find
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *str;
	char *spr = "";

	if (format)
	{
	va_start(ap, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case ('c'):
				printf("%s%c", spr, va_arg(ap, int));
				break;
			case ('i'):
				printf("%s%d", spr, va_arg(ap, int));
				break;
			case ('f'):
				printf("%s%f", spr, va_arg(ap, double));
				break;
			case ('s'):
				str = va_arg(ap, char *);
				if (str == NULL)
				{
					printf("%s(nil)", spr);
					break;
				}
				printf("%s%s", spr, str);
				break;
			default:
				i++;
				continue;
		}
		spr = ", ";
		i++;
	}
	va_end(ap);
	}
	printf("\n");
}
