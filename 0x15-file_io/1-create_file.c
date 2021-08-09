#include "main.h"

/**
 * create_file - this creates a file with contents
 * @filename: name of the file
 * @text_content: the contents of the file
 *
 * Return : returns 0 on error or 1 on success
 */
int create_file(const char *filename, char *text_content)
{
size_t fd;
int charLength = 0;

if (text_content == NULL)
{
return (0);
}
fd = open(text_content, O_RDWR | O_CREAT | O_TRUNC);
if (fd == -1)
{
return (0);
}
while (text_content[charLength])
{
charLength++;
}
close(fd);
write(fd, text_content, charLength);
return (1);
}
