#include "main.h"
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<sys/stat.h>

/**
 * append_text_to_file - This appends a text to a file
 * @filename: this is the name of the file to append
 * @text_content: this is the content to append
 * Return: returns 0 on error and 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int charlength = 0;
int writeResult = 0;

if (filename == NULL)
{
return (0);
}
fd = open(filename, O_WRONLY || O_APPEND);
if (fd  == -1)
{
return (0);
}
while (text_content[charlength])
{
charlength++;
}

if (text_content)
{
writeResult = write(fd, text_content, charlength);
}
if (writeResult == -1)
{
return (0);
}

close(fd);
return (1);
}
