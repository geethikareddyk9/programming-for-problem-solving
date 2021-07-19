/*Write a C program, which takes a number (1-7)  from the user, and 
prints the day of the week as per the number(use Switch Statement)
(1-Monday,2-Tuesday…7-Sunday)*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number(1-7):");
	scanf("%d",&n);
	switch(n)
	{
		case 1 : printf("Monday");
			break;
		case 2 : printf(" Tuesday.");
			break;
		case 3 : printf(" Wednesday");
			break;
		case 4 : printf(" Thurday");
			break;
		case 5 : printf(" Friday");
			break;
		case 6 : printf("Saturday");
			break;
		case 7 : printf(" Sunday");
			break;
	default : printf("Something is wrong...");
	}
	return 0;
}

