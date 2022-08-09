#include <stdio.h>

int main(void)
{
	char a,b,c;
	int age;

	printf("Enter your name and your age; NAME:   AGE:  ");
	scanf("%c %c %c %d.\n" ,&a, &b, &c, &age);
	printf("My name is %c%c%c and my age is %d.\n",a,b,c,age);
	
	return(0);
}
