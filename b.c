
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>
#include <sys/types.h>
#include <sys/stat.h>

#include <errno.h>
int main()
{
	int fd;
	fd = open("dat",O_RDONLY,0644);
	perror("open error\n");
	printf("%d\n",fd);
}
