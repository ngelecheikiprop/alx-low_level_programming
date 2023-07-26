#include "main.h"
#include <stdio.h>
/**
 *_atoi - convert a string to an integer.
 * @s: string
 *
 *Return: a number
 */
int _atoi(char *s)
{
	int len;
	int num = 0;
	int sign = 1;

	for (len = 0; s[len] != '\0'; len++)
	{
		if (s[len] >= '0' && s[len] <= '9')
		{
			num = num * 10 + (s[len] - '0');
		}
		if (s[len] == '-')
			sign = sign * -1;
	}
	num = num * sign;
	return (num);
}
