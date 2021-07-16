/* to proggram employe id and salary for one month*/
#include<stdio.h>
int main()
{
	float hours,amount,monthhours,salary;
	int employeeid;
	hours = 8;
	printf("\nEnter the employee id:");
	scanf("%d",&employeeid);
	printf("\nenter the no.of hours worked in a day:");
	scanf("%f",&hours);
	printf("\nthe amount recived per hour is equal to:");
	scanf("%f",&amount);
	monthhours = hours*30;

	salary = (amount*hours)*30;

	printf("the salary recived in a months is : %d",salary);
	return 0;
	
	
	
}
