#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function to read a text file
 * and print its content to STDOUT.
 * @filename: Name of the text file to read.
 * @letters: Number of characters to be read and printed.
 *
 * Return: The actual number of bytes read and printed.
 *         Returns 0 if the function fails or if filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_desc;
	ssize_t bytes_read;
	ssize_t bytes_written;

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	bytes_read = read(file_desc, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_desc);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file_desc);

	return (bytes_written);
}
