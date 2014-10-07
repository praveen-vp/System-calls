
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <dirent.h>
#include <signal.h>

#define SIZE 1024
int main(int argc, char *argv[])
{
	char buf[SIZE];
	int fd,n;
	fd = open(argv[1],O_RDWR|O_CREAT|O_TRUNC,0644);
	while((n = read(0,buf,sizeof(buf)-1)) > 0) {    
		write(1,buf,n);
		write(fd,buf,n);
	}
	return 0;
}

