#include "main.h"

/**
  * append_text_to_file - append a text at the end of the file
  * @filename: pointer to the file
  * @text_content: content to append at the end of the file
  * Return: 1 or -1 on fail
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;
	int nwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;

		nwrite = write(fd, text_content, i);

		if (nwrite == -1)
			return (-1);
	}

	close(fd);

	return (1);

}
