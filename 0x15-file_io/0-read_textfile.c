#include "main.h"

/**
 * read_textfile - read and print text file to posix
 * @filename: list the names of file
 * @write: the expected amount of bytes
 * @letters: number of letters to read and print
 * Return: 0 or number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	char *buffer = (char *)malloc(letters);
	ssize_t fd;
	ssize_t write;
	ssize_t t;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
