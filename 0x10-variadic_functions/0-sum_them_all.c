#include <stdarg.h>
/**
 * sum_them_all - adds all the numbers given
 * @n: the number must not be zero
 *
 * Return: the sum of all numbers given
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int sum, i;

	if (n == 0)
		return (0);
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
