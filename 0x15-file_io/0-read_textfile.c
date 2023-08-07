#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 *                to POSIX standard output.
 *
 * @filename: file to be read
 * @letters: number of letters to read and printed from file
 *
 * Return: 0 if it fails or actual number of letters it could
 *         read and print do not tally.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t temp, count;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	temp = read(file, buffer, letters);
	if (temp == -1)
		return (0);

	count = write(STDOUT_FILENO, buffer, temp);
	if (count == -1 || temp != count)
		return (0);

	free(buffer);

	close(file);

	return (count);
}