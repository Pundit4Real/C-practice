#include <stdio.h>

int main(void)
{
	char p,f,c;
	int num;
	printf("Enter your company abbreviation and the total client in the company");
	scanf("%c %c %c %d.\n",&p, &f, &c, &num);
	printf("My company name is %c%c%c and our total client are %d.\n", p,f,c,num);

	return(0);
}
