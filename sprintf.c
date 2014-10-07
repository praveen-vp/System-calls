
#include<stdio.h>
 
int main()
{
	int a = 1;
    float b = 1.23;
	char c = 'u', string[100] = "My initial character array.";
	
	printf("1st -->%s\n\n", string);

	sprintf(string, "%d  %f %c ", a, b, c);
	printf("2nd string -->%s\n", string);
	return 0;
}

