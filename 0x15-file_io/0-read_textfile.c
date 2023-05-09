#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    int fd, bytes_read;
    char *buf;

    if (filename == NULL) {
        return 0;
    }

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        return 0;
    }

    buf = (char *) malloc(sizeof(char) * (letters + 1));
    if (buf == NULL) {
        close(fd);
        return 0;
    }

    bytes_read = read(fd, buf, letters);
    if (bytes_read == -1) {
        free(buf);
        close(fd);
        return 0;
    }

    buf[bytes_read] = '\0';

    if (write(STDOUT_FILENO, buf, bytes_read) != bytes_read) {
        free(buf);
        close(fd);
        return 0;
    }

    free(buf);
    close(fd);

    return bytes_read;
}
