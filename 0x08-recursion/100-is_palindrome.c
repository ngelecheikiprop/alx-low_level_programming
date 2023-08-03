#include "main.h"
#include <stdio.h>
/**
  *find_len - finds lenght of string
  *@s : string
  *@len: previous len
  *
  *Return: length of string
  */
int find_len(char *s, int len)
{
	if (s[len] == '\0')
		return (len);
	else
		return (find_len(s, len + 1));
}
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

	len = find_len(s, 0);
	return (_check(s, 0, len - 1));
}
