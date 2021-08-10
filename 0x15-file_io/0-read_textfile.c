#include "main.h";
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<sys/stat.h>

/**
 * read_textfile - this reads a text file
 * @filename: name of file to read
 * @letters: the length of letters to read
 *
 * Return:returns the number of letters read or 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, readed;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	readed = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readed);

	free(buff);
	close(fd);
	return (readed);
}
