#include "main.h"

/**
 * read_textfile - this reads a text file
 * @filename: name of file to read
 * @letters: the length of letters to read
 * 
 * Return:returns the number of letters read or 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters){
ssize_t textread;
size_t fd;

char *buff;
if (filename == NULL)
{
return (0);
}
buff = malloc(sizeof(char) * letters);
if (buff == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
textread = read(fd, buff, letters);
if (textread == -1)
{
return (0);
}
write(STDOUT_FILENO, buff, textread);
free(buff);
close(fd);
return (1);
}
