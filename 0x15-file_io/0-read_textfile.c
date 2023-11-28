#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print out
 * Return: returns the number of letters read and printed or 0
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, read_chars, write_chars;
	char buffer[1024];

	if (filename == NULL)
	{
		return (0);
	}

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}

	read_chars = read(file_descriptor, buffer, letters);
	if (read_chars == -1)
	{
		close(file_descriptor);
		return (0);
	}

	write_chars = write(STDOUT_FILENO, buffer, read_chars);
	if (write_chars == -1 || (size_t)write_chars != (size_t)read_chars)
	{
		close(file_descriptor);
		return (0);
	}

	close(file_descriptor);
	return (read_chars);
}
