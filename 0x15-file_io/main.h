#include<stdlib.h>

int _strlen(char*);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void processFileCopy(const char *srcfilename, const char *destfilename);
