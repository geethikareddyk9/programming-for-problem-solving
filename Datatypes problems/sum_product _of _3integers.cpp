/* sum and product of three intefers*/

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float sum,product;
	printf("\nEnter three integers:");
	scanf("%d%d%d",&a,&b,&c);
	sum = (a+b+c)/3;
	product = a*b*c;
	printf("\nThe sum of the 3 integers is given as = %f",sum);
	printf("\nThe product is given as = %f",product);
	return 0;
	
}
