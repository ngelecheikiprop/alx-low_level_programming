/**
  *rot13 - rotates alphabet by 13
  *@c: what to rotate
  *
  *Return: character
  */
char *rot13(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i] >= 'A' && c[i] <= 'Z'))
			c[i] = ((c[i] - 'A' + 13) % 26) + 'A';
		else if ((c[i] >= 'a' && c[i] <= 'z'))
			c[i] = ((c[i] - 'a' + 13) % 26) + 'a';
	}
	c[i] = '\0';
	return ((char *)c);
}

