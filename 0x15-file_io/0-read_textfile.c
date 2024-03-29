#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads and print textfile to POSIX stdout
 * @filename: name of the file
 * @letters: number of letters to be read
 * Return: actual number of letters read and printed
 * on failure, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_count, count;
	char *text;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
		return (0);
	read_count = read(fd, text, letters);
	if (read_count == -1)
	{
		free(text);
		return (0);
	}
	count = write(STDOUT_FILENO, text, read_count);
	if (count == -1)
	{
		return (0);
	}
	close(fd);
	free(text);
	return (count);
}
