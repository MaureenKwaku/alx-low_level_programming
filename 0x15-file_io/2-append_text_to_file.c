#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of the file
 * @text_content: content to append
 * Return: returns 1 or -1
**/

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_chars;

	if (filename == NULL)
	{
		return (-1);
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
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
