
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <signal.h>

#define BUFSIZE 512
char buf[BUFSIZE];
char* last[BUFSIZE];

int main(int argc,char* argv[])
{
	int i,h;
	// read from input 
	while((i = read(0,buf,sizeof(buf)-1))) {
		buf[i-1] = '\0';
		break;
	}
	char* todo[BUFSIZE];
	char* p = strtok(buf," \n");
	
	for(h = 0;p != NULL;h++) {
		todo[h] = p;
		p = strtok(NULL," \n");
	}
	
	h = 1; i = 0;
	while(h < argc)
		last[i++] = argv[h++];
	
	h = 0;
	while(todo[h] != NULL)
		last[i++] = todo[h++];
	
	if(fork() == 0) 
		execvp(argv[1],last);
	wait();
	return 0;
}

