/**
  *to_upper - changes to upper case
  *@ch: character to change
  *
  *Return: character
  */
char to_upper(char ch)
{
	return (ch >= 'a' && ch <= 'z' ? ch - ('a' - 'A') : ch);
}

/**
  *is_separator - checks if it is a seperator
  *@ch: - character to check
  *
  *Return: int
  */
int is_separator(char ch)
{
	return (ch == ' ' || ch == '\t' || ch == '\n' || ch == ',' || ch == ';' ||
			ch == '.' || ch == '!' || ch == '?'
			|| ch == '"' || ch == '(' ||
			ch == ')' || ch == '{' || ch == '}');
}

/**
  *cap_string - capitalizes all words of a string.
  *@s: pointer to string
  *
  *Return: char
  */
char *cap_string(char *s)
{
	int i = 0;
	int newWord = 0;

	s[0] = to_upper(s[0]);
	for (i = 1; s[i] != '\0'; i++)
	{
		if (is_separator(s[i]))
			newWord = 1;
		else if (newWord)
		{
			s[i] = to_upper(s[i]);
			newWord = 0;
		}
	}
	return ((char *)s);

}
