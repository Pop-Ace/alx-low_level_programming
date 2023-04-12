#include "main.h"

/**
 * append_text_to_file - Entry point
 * Description: Appends text at the end of a file
 * @filename: The name of the file to be read
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 on sucess, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fildes;
       	int length;
	int write_context;

	/* checking if filename is empty */
	if (!filename)
		return (-1);

	/* open file using O_APPEND */
	fildes = open(filename, O_WRONLY | O_APPEND);
	if (fildes == -1)
		return (-1);

	/* if text_content is empty, write nothing to the file */
	if (!text_content)
	{
		close(fildes);
		return (1);
	}

	/* calculating length of text_content */
	for (length = 0; text_content[length]; length++)
		;

	/* write text_content to the file */
	write_context = write(fildes, text_content, length);
	if (write_context == -1)
	{
		close(fildes);
		return (-1);
	}

	/* close the file and return 1 on success */
	close(fildes);
	return (1);
}
