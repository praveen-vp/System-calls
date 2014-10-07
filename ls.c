
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
{
	struct dirent *p;
	DIR *fd;

	if(argc <= 1 ) {
		printf("Error : No directory name\n");
		return;
	}
	
	else {
		fd = opendir(argv[1]);
		if(fd == 0) {
			perror("'Error' ");
			return;
		}
		while((p = readdir(fd)) != NULL)
			printf("\t%s\n",p->d_name);
		closedir(fd);
	}
}

