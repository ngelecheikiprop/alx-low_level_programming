#include "main.h"
/**
  *leet -  encodes a string into 1337.
  *@str: - what to encode
  *
  *Return: char
  */
char *leet(char *str)
{
	char leet_chars[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char leet_replacements[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j += 2)
		{
			if (str[i] == leet_chars[j] || str[i] == leet_chars[j + 1])
			{
				str[i] = leet_replacements[j / 2];
				break;
			}
		}
	}
	return (str);
}

