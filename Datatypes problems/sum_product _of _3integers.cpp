/* sum and product of three intefers*/

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float avg,product,sum;
	printf("\nEnter three integers:");
	scanf("%d%d%d",&a,&b,&c);
	avg = (a+b+c)/3;
	product = a*b*c;
	sum = a+b+c;
	printf("\nThe sum of the 3 integers is given as = %f",avg);
	printf("\nThe product is given as = %f",product);
	printf("\n sum = %d,sum);
	return 0;
	
}
