#include <stdio.h>

int main(void)
{

	//Declearations
	
	int a=72;
	double b=50.0;
	int c=144;
	double result;

	//statements
	
	result =c/a;
	printf("c/a=%lf.\n", result);
	printf("a+b*(c+a)/b=%lf\n", a+b*(c+a)/b);

	return(0);
}
