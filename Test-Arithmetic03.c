#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	int sum;
	
	printf("Enter any two integer numbers separated by space");
	scanf("%d %d\n", &num1, &num2);
	sum=num1+num2;
	printf("The sum is : num1 + num2 = %d.\n", sum);

	return(0);
}
