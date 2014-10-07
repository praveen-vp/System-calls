
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

// main 
int main(int argc,char* argv[])
{ 	int fd;
	fd = remove(argv[1]);
	if(fd < 0) 
		perror("error");
}

