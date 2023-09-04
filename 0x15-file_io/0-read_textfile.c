#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: Readable files
 * @letters: no_of letters readed
 * Return: returns the actual number of letters it could read and print
 *         if the file can not be opened or read, return 0
 *         if filename is NULL return 0
 *         if write fails or does not write exp amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_read;
	ssize_t write1;
	ssize_t text;

	file_read = open(filename, O_RDONLY);
	if (file_read == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	text = read(file_read, buffer, letters);
	write1 = write(STDOUT_FILENO, buffer, text);

	free(buffer);
	close(file_read);
	return (write1);
}
