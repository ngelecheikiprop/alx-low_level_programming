/**
  *string_toupper - changes all lowercase
  *letters of a string to uppercase
  *@c: what to change
  *
  *Return: character
  */
char *string_toupper(char *c)
{
	int i = 0;
	int offset;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			offset = c[i] - 'a';
			c[i] = offset + 'A';
		}
		i++;

	}
	return ((char *)c);
}
