/**
  *_strncpy - copies a string
  *@dest: destination
  *@src: from
  *n: number of characters
  *
  *Return: char
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
