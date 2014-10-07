
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

// cp 
#define BUFLEN 1024
void m_cp(char* f,char* d) {

	int fdr,fdw,n;
	char buf[BUFLEN];

	fdr = open(f,O_RDONLY);
	fdw = open(d,O_WRONLY | O_CREAT | O_TRUNC, 0644);

	while((n = read(fdr,buf,sizeof(buf))) > 0 )
		if(write(fdw,buf,n) != n ) {
			fprintf(stderr,"write error\n");
			exit(1);
		}

	if(n < 0) {
		fprintf(stderr,"read eroor\n");
		exit(1);
	}
}

// main 
int main(int argc,char* argv[])
{
	m_cp(argv[1],argv[2]);
}

