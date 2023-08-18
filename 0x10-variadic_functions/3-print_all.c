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
	int separator = 0;
	int len = strlen(format);
	char *str;

	if (format == NULL)
	{
		printf("\n")
		return;
	}
	va_start(ap, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case ('c'):
				printf("%c", va_arg(ap, int));
				separator = 1;
				break;
			case ('i'):
				printf("%d", va_arg(ap, int));
				separator = 1;
				break;
			case ('f'):
				printf("%f", va_arg(ap, double));
				separator = 1;
				break;
			case ('s'):
				str = va_arg(ap, char *);
				if (s == NULL)
				{
					printf("(nil)");
					separator = 1;
					break;
				}
				printf("%s", s);
				separator = 1;
				break;
			default:
				i++;
				continue;
		}
		printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
