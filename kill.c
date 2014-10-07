
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

// kill call 
int main(int argc,char* argv[])
{
	int n;
	printf("%d\n",(n = atoi(argv[1])));
	kill(n,9);
}

