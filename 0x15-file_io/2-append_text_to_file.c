#include "main.h"

/**
 * append_text_to_file - This appends a text to a file
 * @filename: this is the name of the file to append
 * @text_content: this is the content to append
 */
int append_text_to_file(const char *filename, char *text_content)
{
size_t fd;
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

writeResult = write(fd, text_content, charlength);

if(writeResult == -1)
{
return (0);
}

close(fd);
return (1);
}