#include "main.h"
/**
  *_check - checks a palindrome
  *@s: the string
  *@start: where to check
  *@end: compare with end
  *
  *Return: 1 if same
  *0 if not same
  */
int _check(char *s, int start, int end)
{
	if (start > end)
		return (1);
	if (s[start] == s[end])
		return (_check(s, start + 1, end - 1));
	else
		return (0);
}
/**
  *int is_palindrome - checks if a string is a palindrome
  *@s: string to inspect
  *
  *Return: 1 if palindrome
  */
int is_palindrome(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (_check(s, 0, len - 1));
}
