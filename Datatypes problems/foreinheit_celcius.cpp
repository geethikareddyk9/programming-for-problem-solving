/* programm to find forein heat to celsius*/

#include<stdio.h>
#include<math.h>
int main()
{
	float c, F;
	printf("\nEnter integer:");
	scanf("%f",&c);
	F=(1.8*c)+32;
	printf("\nThe fharenheat is %f:",F);
	return 0;
}
