
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <dirent.h>
#include <signal.h>

#define GREEN   "\x1b[32m"
#define BLUE    "\x1b[34m"
#define WHITE   "\x1b[37m"

void lsr(char *path) {
	
	DIR *dp = opendir(path);
	if(!dp) {
		perror(path);
		return;
	}
	struct dirent *ep;
	char newdir[512];

	printf(BLUE "%s :\n", path);

	while((ep = readdir(dp)))
		if(strncmp(ep->d_name, ".", 1))
			printf(GREEN "\t|_%s\n", ep->d_name);
	closedir(dp);
	
	dp = opendir(path);
	while((ep = readdir(dp)))
	   	if(strncmp(ep->d_name, ".", 1)) {
			if(ep->d_type == 4) {
				sprintf(newdir, "%s/%s", path, ep->d_name);
				lsr(newdir);
		}
	}
	closedir(dp);
}

// main 
int main(int argc,char* argv[])
{
	if(argc <= 1 ) {
		printf("Error : No directory name\n");
		return;
	}
	else 
		lsr(argv[1]);
}
	
