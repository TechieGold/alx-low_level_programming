#include "main.h"

/**
 * read_textfile -Reads a text file and prints it to the standard output.
 * @filename: file to read and print.
 * @letters: Number of letters it should read and print.
 *
 * Return: Actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_written;
	char *buf;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = (char *)malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}


	bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	free(buf);
	close(fd);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
