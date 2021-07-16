/* to find the simple interst */

#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r ,simpleinterest;
	printf("\nEnter the three integers");
	scanf("%f%f%f",&p,&t,&r);
	simpleinterest =(p*t*r)/100;
	printf("\nThe simpleinterest is %f:",simpleinterest);
	return 0;

	
}
