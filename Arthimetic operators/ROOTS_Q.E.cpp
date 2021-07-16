/*. Program to find roots of a Quadratic Equation */
#include <stdio.h>
#include <math.h>
int main ()
{
	int a,b,c,r1,r2,delta;
	printf("\nEnter the coehfficent of the Q.Eequation a(x^2)+ bx + c = 0 );
	scanf("\n%d",&a);
	scanf("\n%d",&b);
	scanf("\n%i",&c);
	delta = (pow(b,2))- 4*a*c ;
	r1 = ((b)+sqrt(delta))/(2*a);
	r2 = ((b)-sqrt(delta))/(2*a);
	printf("\nRoots of the given quad eqn are %d , %d",r1,r2);
	return 0;
}

