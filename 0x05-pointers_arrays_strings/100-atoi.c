#include "main.h"
#include "limits.h"
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
	/*int numberExtracted = 0;*/

	for (len = 0; s[len] != '\0'; len++)
	{
		/*if (s[len] >= '0' && s[len] <= '9')
		{
			num = num * 10 + (s[len] - '0');
			numberExtracted = 1;
		}
		else if (numberExtracted && s[len] == ' ')
			break;
		if (s[len] == '-')
			sign = sign * -1;*/
		if (s[len] == '-')
			sign *= -1;
		else if (s[len] >= '0' && s[len] <= '9')
			num = num * 10 + (s[len] - '0');
		else if (num > 0)
			break;
	}
	return (num * sign);
}
