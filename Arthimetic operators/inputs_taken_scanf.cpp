/*Program to Print How Many Inputs are taken 
from Keyboard using Scanf.*/

#include <stdio.h>
int main ()
{
	int num1,num2,num3,n;
	//char asignchar;
	printf("\nenter the three numbers");
	n = scanf("%d\n%d\n%d",&num1,&num2,&num3);
	
	printf("\nNumber of inputs scanf statement took here is %d",n);
	return 0;
	
}

