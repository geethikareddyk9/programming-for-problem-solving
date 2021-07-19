#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter the num:");
	scanf("%d",&num);
	if(num%3==0)
	printf("the number is divisble by 3");
	if(num%5==0)
	printf("divisible by  8 ");
	if(num%5==0&&num%3==0)
	printf("divisble by both 3 qnd 5");
	else
	printf("not divisible by 3 and 5");
	
}
