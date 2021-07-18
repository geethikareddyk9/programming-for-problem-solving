#include<stdio.h> /* summ of individuals numbers*/

int main()
{
	int num=1,sum=0;
	
	while(num<=10)
	{
		printf("\5%d",num);
		sum+=num;
		num++;
	}
	printf("\nThe sum is:%d",sum);
	return 0;
}
