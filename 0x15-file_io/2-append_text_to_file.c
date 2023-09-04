#include "main.h"
/**
  *append_text_to_file - adds the text
  *to the end of the file
  *@filename: this is the name of the file
  *@text_content: this is what is to be appended
  *
  *Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	bytes = write(fd, text_content, strlen(text_content));
	if (bytes == -1)
		return (-1);
	return (1);
}
