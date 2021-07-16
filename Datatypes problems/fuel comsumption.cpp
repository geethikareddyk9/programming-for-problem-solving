/* programm to find bikes average consumption*/

#include<stdio.h>
#include<math.h>
int main()
{
	float avg,dis,fuel;
	dis = 23.5;
	printf("\nEnter the fuel consumption:");
	scanf("%f",&fuel);
	avg = dis/fuel;
	printf("\nthe average of bike = %f",avg);
	
	return 0 ;
	/* avg = mileage
	fuel consumption = total distance in km/mileage*/
}
