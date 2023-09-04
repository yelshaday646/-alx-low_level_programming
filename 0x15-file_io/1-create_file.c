#include "main.h"

/**
 * create_file - It creates a file.
 * @filename: The name of the file to be created.
 * @text_content: Is a NULL terminated string to write to the file.
 * Return: 1 for success and -1 for fail.
 */
int create_file(const char *filename, char *text_content)
{
	int file_read, write1, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file_read = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write1 = write(file_read, text_content, length);

	if (file_read == -1 || write1 == -1)
		return (-1);

	close(file_read);

	return (1);
}
