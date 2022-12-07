#include "main.h"

/**
  * read_textfile - reads and prints the content of the file
  * @filename: pointer to the file
  * @letters: no of bytes
  * Return: no of bytes printed or 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t nread, nwrite;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	nread = read(fd, buff, letters);

	if (nread == -1)
		return (0);

	nwrite = write(STDOUT_FILENO, buff, nread);

	if (nwrite == -1)
		return (0);

	close(fd);

	free(buff);

	return (nwrite);
}

