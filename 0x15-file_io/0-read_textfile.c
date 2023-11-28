#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print out
 * Return: returns the number of letters read and printed or 0
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t read_chars, write_chars;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	read_chars = read(file_descriptor, buffer, letters);
	write_chars = write(STDOUT_FILENO, buffer, read_chars);

	close(file_descriptor);
	free(buffer);

	return (write_chars);
}
