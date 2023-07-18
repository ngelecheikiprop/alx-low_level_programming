#include "main.h"
/**
 *int _islower - checks for lower case
 *@c: the character to be checked
 *
 *Return: returns conditionally
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
