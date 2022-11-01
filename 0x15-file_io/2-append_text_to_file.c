#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: content to be appended
 * Return: 1 if file exists. -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int f_len;
	int wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (f_len = 0; text_content[f_len]; f_len++)
			;
		wr = write(fd, text_content, f_len);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
