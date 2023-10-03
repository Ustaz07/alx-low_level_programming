#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fdw, len = 0;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, mode);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		fdw = write(fd, text_content, len);
		if (fdw == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

