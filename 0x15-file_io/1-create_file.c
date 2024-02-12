#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>
/**
 * create_file - moa
 * @filename: moa
 * @text_content: moa
*/
int create_file(const char *filename, char *text_content)
{
	int fd;

if(filename == NULL)
{
	return -1;
}
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

if(fd == -1)
{
	return -1;
}
	if(text_content != NULL)
	{
ssize_t bytes_written = write(fd, text_content, strlen(text_content));
	if(bytes_written == -1)
	{  
	close(fd);
	return -1;
	}
	}
	close(fd);
	return 1;
}
