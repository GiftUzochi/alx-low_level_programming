#include "main.h"

/**
 * read_textfile - read and print text file to posix
 * @filename: list the names of file
 * @write: the expected amount of bytes
 * @letters: number of letters to read and print
 * Return: 0 or number of characters to print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	char *buffer = (char *)malloc(letters);
	size_t rsize;
	ssize_t written;

	if (filename == NULL)
		return (0);
	if (buffer == NULL)
		return (0);

	f = fopen(filename, "r");

	if (f == NULL)
		return (0);

	rsize = fread(buffer, 1, letters, f);

	if (rsize == 0)
	{
		free(buffer);
		fclose(f);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, rsize);
	if (written == -1)
	{
		free(buffer);
		fclose(f);
		return (0);
	}

	fclose(f);
	free(buffer);
	return (written);
}
