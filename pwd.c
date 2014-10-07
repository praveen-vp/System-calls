
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

void m_pwd(void) {

	char buf[250];
	getcwd(buf,200);
	printf("%s\n",buf);

}


int main()
{
	m_pwd();
}

