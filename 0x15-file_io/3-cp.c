#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * main - Program entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments passed to the program
 *
 * Return: 0 on success, or an exit code on failure
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, rd_bytes, wr_bytes;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        return (97);
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        return (98);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(fd_from);
        return (99);
    }

    do
    {
        rd_bytes = read(fd_from, buffer, BUFFER_SIZE);
        if (rd_bytes == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
            close(fd_from);
            close(fd_to);
            return (98);
        }

        wr_bytes = write(fd_to, buffer, rd_bytes);
        if (wr_bytes == -1 || wr_bytes != rd_bytes)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(fd_from);
            close(fd_to);
            return (99);
        }
    } while (rd_bytes > 0);

    if (close(fd_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        return (100);
    }

    if (close(fd_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        return (100);
    }

    return (0);
}
