#include "main.h"
/**
  *creat_file - creats a file
  *@filename: the name to make the file
  *@text_content: what to put in the file
  *
  *Return: 1 on success and -1 if not success
  */
int create_file(const char *filename, char *text_content)
{
	ssize_t bytes;
	int fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	bytes = write(fd, text_content, strlen(text_content));
	if (bytes == -1)
		return (-1);
	return (1);
}
