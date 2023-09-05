#include "main.h"

/**
 * create_file - creats a file without perm
 * @filename: the filename
 * @text_content: u who tell me
 * Return: 1 if succeed -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "w+");
	if (fp == NULL)
		return (-1);

	fputs(text_content, fp);

	fclose(fp);
	return (1);
}
