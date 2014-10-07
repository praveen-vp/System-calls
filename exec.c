
#include "linux.h"

int main(int argc,char* argv[])
{
	execlp(argv[1],argv[1],(char*)NULL);
	
	//execlp("ls","ls",(char*)NULL);
	return 0;
}

