#include <stdio.h>

#define GREEN   "\x1b[32m"
#define BLUE    "\x1b[34m"
#define WHITE   "\x1b[37m"
int main ()
{
	char name[23] = "wlwjg; lkjlk";
	printf(GREEN "\t%s\n" , name);

	return 0;
}

