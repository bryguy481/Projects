#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(){

    int fd;
    fd = open("testFile",O_CREAT | O_TRUNC, 0400);
    close(fd);

    return 0;
}
