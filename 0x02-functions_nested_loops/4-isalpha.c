#include "main.h"
/**
 * _isalpha - check alpahabet
 *@c: character expected
 *
 *Return: returns conditionally
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) | (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
