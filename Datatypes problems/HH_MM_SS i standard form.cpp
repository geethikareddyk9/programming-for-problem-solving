/* standard time format HH:MM:SS*/

#include<stdio.h>
int main()
{
	int t,h,m,seconds;
	printf("\nenter time in seconds");
	scanf("%d",&seconds);

	h = seconds/3600;
	
	m = (seconds - (3600*h))/60;

	t = (seconds-(3600*h)-(m*60));
	
	printf("\nstandard time format = H:M:S %d:%d:%d ",h,m,t);
	
	return 0;
}
