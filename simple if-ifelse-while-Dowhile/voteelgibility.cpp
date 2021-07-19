//vote eligibility

#include <stdio.h>
int main()
{
	int age ;
	printf("Enter your age : ");
	scanf("%i",&age);
	
	if (age>=18)
	printf("\n Eligible to vote in India");
	else
	printf("\nYou are not eligible to vote ");
	return 0;
}

