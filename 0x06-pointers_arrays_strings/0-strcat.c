/**
 *_strcat -  concatenates two strings
 *@dest: where it will be copied
 *@src: what to copy
 *
 *Return: pointer to result
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
