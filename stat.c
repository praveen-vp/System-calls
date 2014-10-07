
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
#include <time.h>

// stat
void m_stat(const char* name, int n) {

	struct stat buf;

	if(n <= 1) 
		printf("stat: missing operand 'file name'\n");
	else {
		stat(name,&buf);
		printf("File name: '%s'\n",name);
		printf("protection: %d\n",(int)(buf.st_mode));
		printf("Device:	%d\n",(int)(buf.st_dev));
		printf("Size: %d ",(int)buf.st_size);
		printf("IO Blocks:%d ",(int)buf.st_blksize);
		printf("Blocks:	%d\n",(int)buf.st_blocks);
		printf("Uid: %d	",(int)buf.st_uid);
		printf("Gid: %d	",(int)buf.st_gid);
		printf("I-node:	%d ",(int)buf.st_ino);
		printf("Links: %d\n",(int)buf.st_nlink);
		printf("Last Access Date : %s",ctime(&(buf.st_atime)));
		printf("Last Modify Date : %s",ctime(&(buf.st_mtime)));
		printf("Last Status Change :%s",ctime(&(buf.st_ctime)));
	}
}


// main 
int main(int argc,char* argv[])
{
		m_stat(argv[1],argc);
}

