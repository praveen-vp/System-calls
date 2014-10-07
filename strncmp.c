
#include <stdio.h>
#include <string.h>

int main()
{
	char a[12] = "abcd";
	printf("%d\n",strncmp(a,".",1));
	printf("%d\n",strncmp(".",".",1));
}

