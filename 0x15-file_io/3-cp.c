#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int file_read);

/**
 * @create_buffer - give 1024 bytes memory space for a buffer.
 * @file: File name for buffer storage.
 * @file_read: open file to read.
 * Return: newly allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * @close_file - Closes file.
 * @file_read: File to be closed.
 */
void close_file(int file_read)
{
	int close1;

	close1 = close(file_read);

	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close1 file_read %d\n", file_read);
		exit(100);
	}
}

/**
 * @copy_file - Copies file content to another file.
 * @argument: The arguments.
 * @argument_copied: pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: The argument count is incorrect - exit code 97.
 * file_from does not exist or cannot be read - exit code 98.
 * file_to cannot be created or written to - exit code 99.
 * file_to or file_from cannot be closed - exit code 100.
 */
int copy_file(int argument, char *argument_copied[])
{
	int from_file, to_file, read1, write1;
	char *buffer;

	if (argument != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argument_copied[2]);
	from_file = open(argument_copied[1], O_RDONLY);
	read1 = read(from_file, buffer, 1024);
	to_file = open(argument_copied[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_file == -1 || read1 == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argument_copied[1]);
			free(buffer);
			exit(98);
		}

		write1 = write(to_file, buffer, read1);
		if (to_file == -1 || write1 == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argument_copied[2]);
			free(buffer);
			exit(99);
		}

		read1 = read(from_file, buffer, 1024);
		to_file = open(argument_copied[2], O_WRONLY | O_APPEND);

	} while (read1 > 0);

	free(buffer);
	close_file(from_file);
	close_file(to_file);

	return (0);
}
