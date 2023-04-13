#include "main.h"

/**
 * main - copying the content of a file to another file
 * @argc: number of parameters to pass
 * @argv: array of the parameters
 * Return: 0 if successful, 97-100 when it fails
 */

int main(int argc, char *argv[])
{
	int fildes_from, fildes_to, read_context, write_context;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	/* opening file_from */
	fildes_from = open(argv[1], O_RDONLY);
	if (fildes_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* opening file_to */
	fildes_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fildes_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	/* read from file_from and write to file_to */
	while ((read_context = read(fildes_from, buffer, 1024)) > 0)
	{
		write_context = write(fildes_to, buffer, read_context);
		if (write_context == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (read_context == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fildes_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fildes_from), exit(100);

	if (close(fildes_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fildes_to), exit(100);

	return (0);
}
