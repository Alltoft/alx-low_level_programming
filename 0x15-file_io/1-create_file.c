#include "main.h"

/**
 * create_file - creats a file without perm
 * @filename: the filename
 * @text_content: u who tell me
 * Return: 1 if succeed -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL && write(fd, text_content,
	 strlen(text_content)) == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
