#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int append_text_to_file(const char *filename, char *text_content) 
{
    int fd, ret, len;

    
    if (filename == NULL)
        return (-1);

  
    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

   
    if (text_content == NULL) 
    {
        close(fd);
        return (1);
    }


    len = strlen(text_content);

    ret = write(fd, text_content, len);
    if (ret == -1) 
    {
        close(fd);
        return (-1);
    }
close(fd);
return (1);
}
