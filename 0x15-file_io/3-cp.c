#include "main.h"

/**
 * main - copies the content of a file to another
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd_status, wr_status;
	mode_t prm = s_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
	char buf[bufsize];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY, prm);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	rd_status = 1;
	while (rd_status)
	{
		rd_status = read(fd_from, buf, bufsize);
		if (rd_status == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (rd_status > 0)
		{
			wr_status = write(fd_to, buf, rd_status)
			if (wr_status != rd_status || wr_status == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
