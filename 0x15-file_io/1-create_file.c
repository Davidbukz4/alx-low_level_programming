#include "main.h"

/**
 * create_file - create a file
 * @filename: name of file
 * @text_content: content to be written to file
 * Return: 1 if successful, -1 if it failed
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int f_len;
	int wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (-1);
	}

	for (f_len = 0; text_content[f_len]; f_len++)
		;

	wr = write(fd, text_content, f_len);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
