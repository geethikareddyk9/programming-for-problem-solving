/* programm to convert days into months and years*/
#include<stdio.h>
#include<math.h>
int main()
{
	float days,year,months;
	printf("\nEnter the no.of days:");
	scanf("%f",&days);
	months = days/30;
	year = days/365;
	printf("\nThe no.of months is equal to : %f",months);
	printf("\nThe no.of years is equal to : %f",year);
	
	return 0;
}
