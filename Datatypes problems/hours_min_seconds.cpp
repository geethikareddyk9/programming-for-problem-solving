/*programm to convert integer to hours,seconds,mintues*/

#include<stdio.h>
#include<math.h>
int main()
{
	float h,m,seconds;
	printf("\nEnter the integer:");
	scanf("%f",&seconds);
	h = seconds/3600;
	m = seconds/60;
	printf("\nhours %f:",h);
	printf("\nMinutes %f:",m);
	return 0;
	
	
}
