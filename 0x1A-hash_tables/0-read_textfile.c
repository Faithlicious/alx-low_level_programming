#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file prints it to STDOUT
 * @filename: iflename
 * @letters: number of letters it should print
 * Return: w- actual number of byte or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t h;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	h = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (h);
}
