#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 *read_textfile - reads a text file and prints it to th POSIX stdout.
 *@filename: name of the file to be read. 
 *@letters: number of the letters t should print and read.
 *Return: real number of letters it should read and print.
 *
 */     
 ssize_t read_textfile(const char *filename, size_t letters)
 {
     int fd;
     ssize_t lenf, leng;
     char *buffer;
     
     if(filename == NULL)
        return (0);
     fd = open(filename, 0_RDONLY);
     if(fd == -1)
        return (0);
     buffer = malloc (sizeof (char) *letters);
     if(buffer == NULL)
     {
         close(fd);
         return(0);
     }
     lenf = read(fd, buffer, letters);
     close(fd);
     if(lenf ==-1)
     {
         free(buffer);
         return(0);
     }
     leng = write(STDOUT_FILENO, buffer, lenf);
     free(buffer);
     if(lenf !=leng)
        return(0);
     return(leng);
 }
 