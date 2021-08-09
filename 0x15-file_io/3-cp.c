#include "main.h";

/**
  * main - Entry point
  * @argc: The argument count
  * @argv: The argument vector
  * Return: returns 0 success
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	processFileCopy(argv[1], argv[2]);
	exit(0);
}

/**
  * processFileCopy - this is copies the file
  * @srcfilename: the filename to be copied
  * @destfilename: the filename to copy to
  *
  */
void processFileCopy(const char *srcfilename, const char *destfilename)
{
	int ffd, sfd, readed;
	char buff[1024];

	ffd = open(srcfilename, O_RDONLY);
	if (!srcfilename || ffd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", srcfilename);
		exit(98);
	}

	sfd = open(destfilename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((readed = read(ffd, buff, 1024)) > 0)
	{
		if (write(sfd, buff, readed) != readed || sfd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destfilename);
			exit(99);
		}
	}

	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", srcfilename);
		exit(98);
	}

	if (close(ffd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffd);
		exit(100);
	}

	if (close(sfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", sfd);
		exit(100);
	}
}
