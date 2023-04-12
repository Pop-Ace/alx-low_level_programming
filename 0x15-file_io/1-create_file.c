#include "main.h"

/**
 * create_file - Create a file.
 * @filename: Name of the file to be read
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on sucess, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fildes, length, write_the_context;

	/* checking if filename is NULL */
	if (!filename)
		return (-1);

	/* open file by using O_CREAT, O_WRONLY, O_TRUNC */
	fildes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fildes == -1)
		return (-1);

	/* if text_content is NULL, don't write anything to file */
	if (!text_content)
	{
		close(fildes);
		return (1);
	}

	/* calculate the length of text_content */
	for (length = 0; text_content[length]; length++)
		;

	/* write text_content to the file */
	write_the_context = write(fildes, text_content, length);
	if (write_the_context == -1)
	{
		close(fildes);
		return (-1);
	}

	/* close file and return 1 if success */
	close(fildes);
	return (1);
}
