#include "main.h"
/**
  *read_textfile - reads text file and prints
  *it in standard output
  *@filename: the name of the file to read
  *@letters: the number of letters to read
  *
  *Return: the number it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	bytes = read(fd, buffer, letters);
	if (bytes == -1)
	{
		free(buffer);
		return (0);
	}
	bytes = write(STDOUT_FILENO, buffer, bytes);
	if (bytes == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytes);
}
