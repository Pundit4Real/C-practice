#include <stdio.h>

int main(void)
{
	
	int a;
	int b;
	int c;
	int result;
	
		printf("Enter three digits separate by a space");
		scanf("%d %d %d.\n", &a, &b, &c);
		result = b*c/a+b*(a-b);
		printf("The result for the calculation is: b*c/a+b*(a-b) = %d\n", result);
	return(0);
}

