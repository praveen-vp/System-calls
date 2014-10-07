
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

// echo
void m_echo(int argc, char* argv[]) {

	int i = argc;
	while(--argc)
		printf("%s ",argv[i-argc]);
	printf("\n");
}

// main 
int main(int argc,char* argv[])
{
	m_echo(argc,argv);
}

