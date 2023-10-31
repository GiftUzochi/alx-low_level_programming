#include "main.h"

/**
 * create_file - fxn to create file
 * @filename: list the file to create
 * @text_content: composition of text in the file
 * Return: 1 for success and -1 for fail
 */
int create_file(const char *filename, char *text_content)
{
	int desc,
	    int len, result;

	if (filename == NULL)
		return (-1);

	desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (desc == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(desc);
		return (1);
	}

	len = strlen(text_content);
		result = write(desc, text_content, len);

	if (result == -1)
		return (-1);

	close(desc);
	return (1);
}
