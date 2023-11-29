#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 or 0
**/

int main(int argc, char *argv[])
{
	int file_from, file_to, read_chars, write_chars;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from), exit(99);
	}
	while ((read_chars = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_chars = write(file_to, buffer, read_chars);
		if (write_chars != read_chars)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from), close(file_to), exit(99);
		}
	}
	if (read_chars == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from), close(file_to), exit(100);
	}
	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}
	return (0);
}
