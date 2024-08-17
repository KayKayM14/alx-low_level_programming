#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, write_res, len = 0;
/* Check if the filename is NULL */
	if (filename == NULL)
		return (-1);
/* Calculate the length of text_content if it's not NULL */
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}
/* Open the file with write and append flags */
	file = open(filename, O_WRONLY | O_APPEND);
/* Write the text_content to the file */
	write_res = write(file, text_content, len);
/* Check if opening or writing to the file failed */
	if (file == -1 || write_res == -1)
		return (-1);
/* Close the file descriptor */
	close(file);

	return (1);
}
