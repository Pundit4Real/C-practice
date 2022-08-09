#include <stdio.h>

int main(void)
{
	int a =100;
	int b =50;
	int c =4;
	int d =2;
	int result;

	result=a-b;
	printf("a-b=%i.\n", result);
	result=a*b-c;
	printf("a*b-c=%i.\n", result);
	printf("(a+c)-b*a+d=%i.\n", (a+c)-b*a+d);
	
	return(0);
}
