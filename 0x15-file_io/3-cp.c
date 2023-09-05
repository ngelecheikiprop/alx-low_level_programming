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
	ssize_t byte_read = 0, byte_wrote = 0;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdr = open(av[1], O_RDONLY);
	if (fdr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fdw = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fdw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ( (byte_read = read(fdr, buffer, 1024)) > 0)
	{
		 byte_wrote = write(fdw, buffer, byte_read);
		 if (byte_wrote == -1)
		 {
			 dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			 close(fdr);
			 close(fdw);
			 exit(99);
		 }
	}
	if (byte_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		close(fdr);
		close(fdw);
		exit(98);
	}
	if ((close(fdr) == -1) || (close(fdw) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}
	return (0);
}
