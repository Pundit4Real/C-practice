#include <stdio.h>

int main(void)
{
	char c;
	int i;
	float f;
	double d;
	long double lf;
		
		printf("The size of a character is %lu.\n",(unsigned long)sizeof(c));
		printf("The size of an integer is %lu.\n",(unsigned long)sizeof(i));
		printf("The size of a float is %lu.\n", (unsigned long)sizeof(f));
		printf("The size of a double is %lu.\n", (unsigned long)sizeof(d));
		printf("The size of a long double is %lu.\n", (unsigned long)sizeof(lf))		
		;
		return(0);
}
