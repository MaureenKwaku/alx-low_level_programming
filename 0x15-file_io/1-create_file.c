#include "main.h"

/**
 * create_file - creates a file with specified permissions
 * @filename: name of the file to create
 * @text_content: text to write to the fle
 * Return: returns 1 or -1
**/

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_chars;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
	{
		return (-1);
	}

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (file_descriptor == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
	write_chars = write(file_descriptor, text_content, strlen(text_content));
	if (write_chars == -1 || (size_t)write_chars != strlen(text_content))
	{
		close(file_descriptor);
		return (-1);
	}
	}
	close(file_descriptor);
	return (1);
}
