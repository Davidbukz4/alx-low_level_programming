#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: name of file
 * @letters: numbers of letters printed
 * Return: numbers of letter printed. 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (!buf)
		return (0);

	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);
	close(fd);
	free(buf);
	return (wr);
}
