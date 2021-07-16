/* programm to find days into years and weeks*/

#include<stdio.h>
#include<math.h>
int main()
{
	float year,week;
	int days;
	printf("\nenter the no of days:");
	scanf("%d",&days);
	year = days/365;
	week = days/7;
	printf("\n years equal to %f",year);
	printf("\n weeks equal to %f",week);
	return 0;
	
}
