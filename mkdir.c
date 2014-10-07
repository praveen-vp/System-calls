
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <dirent.h>

// mkdir
void m_mkdir(const char* name) {
	
	int i = mkdir(name,S_IRWXU);
	if(i < 0)
		perror("Action failed:\n");
}

// main 
int main(int argc,char* argv[])
{
	m_mkdir(argv[1]);
}


