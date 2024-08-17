#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, write_status, str_len = 0;
/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);
/* Calculate the length of the text_content string */
	if (text_content != NULL)
	{
		while (text_content[str_len])
			str_len++;
	}
/* Open the file: create it if it doesn't exist, write and truncate it */
	file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
/* Write the text_content to the file */
	write_status = write(file_desc, text_content, str_len);
/* Check if the file couldn't be opened or written to */
	if (file_desc == -1 || write_status == -1)
		return (-1);
/* Close the file descriptor */
	close(file_desc);
/* Return 1 to indicate success */
	return (1);
}
