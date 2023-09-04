#include "main.h"
/**
  *main - this is the entry point of
  *my code
  *@ac: the argument count
  *@av: where the arguments are stored
  *
  *Return: nothing. always returns nothing
  */
int main(int ac, char *av[])
{
	int fdr;
	int fdw;
	ssize_t byte_read, byte_wrote, cl;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdr = open(av[1], O_RDONLY);
	byte_read = read(fdr, buffer, 1024);
	if (fdr == -1 || byte_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	cl = close(fdr);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
		exit(100);
	}
	fdw = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	byte_wrote = write(fdw, buffer, byte_read);
	if (fdw == -1 || byte_wrote == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	cl = close(fdw);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}
	return (0);
}
