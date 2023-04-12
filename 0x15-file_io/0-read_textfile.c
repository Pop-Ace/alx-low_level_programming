#include "main.h"

/**
* read_textfile - To read the text file
* @filename: Name of the file to be read
* @letters: The number of letters it should read and print
*
* Return: The actual number of letters it could read and print
* if the file can not be opened or read, return 0
* if filename is NULL return 0
* if write fails or does not write the expected amount of bytes, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fildes;
char *buffer;
ssize_t read_context, write_context;

buffer = malloc(sizeof(char) * letters);
if (!buffer || !filename)
return (0);

fildes = open(filename, O_RDONLY);
if (fildes == -1)
{
free(buffer);
return (0);
}

read_context = read(fildes, buffer, letters);
if (read_context == -1)
{
free(buffer);
close(fildes);
return (0);
}

write_context = write(STDOUT_FILENO, buffer, read_context);
if (write_context == -1)
{
free(buffer);
close(fildes);
return (0);
}

free(buffer);
close(fildes);
return (write_context);
}
