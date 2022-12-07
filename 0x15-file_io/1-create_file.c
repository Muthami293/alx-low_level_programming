#include "main.h"

/**
  * create_file - create a file and writes to it with permissions
  * @filename: pointer to the file
  * @text_content: text to wrtie in the new file
  * Return: 1 or -1
  */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int nwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;

	nwrite = write(fd, text_content, i);

	if (nwrite == -1)
		return (-1);

	close(fd);

	return (1);

}
