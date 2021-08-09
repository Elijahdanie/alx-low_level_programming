#include "main.h"

/**
 * create_file - this creates a file with contents
 * @filename: name of the file
 * @text_content: the contents of the file
 *
 * Return: returns 0 on error or 1 on success
 */
int create_file(const char *filename, char *text_content)
{
int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, _strlen(text_content));

	close(fd);
	return (1);
}
