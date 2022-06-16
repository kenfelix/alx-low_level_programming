#include "main.h"

/**
 * warn - prints errors
 * @error: exit value
 * @str: filename
 * @fd: file descriptor
 * Return: 0 on succes
 */
int warn(int error, char *str, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
		return (0);
	}
}
/**
 * main -  copies the content of a file to another file
 * @argc: number of arguments
 * @argv: Array of pointers to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, r, w;
	char buffer[BUFSIZ];

	if (argc != 3)
		warn(97, NULL, 0);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		warn(98, argv[1], 0);

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
		warn(99, argv[2], 0);

	while ((r = read(file_from, buffer, BUFSIZ)) != 0)
	{
		if (r == -1)
			warn(98, argv[1], 0);

		w = write(file_to, buffer, r);
		if (w == -1)
			warn(99, argv[2], 0);
	}

	close(file_to) == -1 ? (warn(100, NULL, file_to)) : close(file_to);
	close(file_from) == -1 ? (warn(100, NULL, file_from)) : close(file_from);
	return (0);
}
