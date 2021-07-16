/* 2.programm to find the area and perimeter of the circle*/

#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
	float a,b,r,area,perimeter;
	printf("\n enter the two integres:");
	scanf("%f%f",&a,&b);
	perimeter = 2*(a+b);
	printf("\nThe perimeter of the rectangle is %f:",perimeter);
	
	printf("\n enter the number:");
	scanf("%f",&r);
	area = pi*(r*r);
	printf("\nThe area of the rectangle is %f:",area);
	return 0 ;
	
}
