#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text file and prints
 * to the POSIX STDOUT
 * @filename: The filename to open
 * @letters: The number of letters to read and print
 * Return: The number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_descriptor, r_result, w_result;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	f_descriptor = open(filename, O_RDONLY);
	if (f_descriptor < 0)
	{
		free(buffer);
		return (0);
	}

	r_result = read(f_descriptor, buffer, letters);
	if (r_result < 0)
	{
		free(buffer);
		return (0);
	}

	w_result = write(STDOUT_FILENO, buffer, r_result);
	free(buffer);
	close(f_descriptor);

	if (w_result < 0)
		return (0);
	return ((ssize_t)w_result);
}

