/*to calculate total weight and total coast*/
#include<stdio.h>
int main()
{
	float w1,w2,w3,w4,c1,c2,c3,c4,tw,tc;    /* tc = total coast,tw = total weight*/
	printf("\nenter 4 weights:");
	scanf("%f%f%f%f",&w1,&w2,&w3,&w4);
	tw = w1+w2+w3+w4;
	printf("\nThe totak of the given items are = %f kilograms",tw);
	
	printf("\nenter 4 coast of given items :");
	scanf("%f%f%f%f",&c1,&c2,&c3,&c4);
	tc = c1+c2+c3+c4;
	printf("\n total coast = %f rs",tc);
	return 0;
	
	
}
