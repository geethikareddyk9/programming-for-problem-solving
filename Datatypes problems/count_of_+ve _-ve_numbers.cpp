/* Write a C program that read 5 numbers and 
counts the number of positive numbers and negative numbers. */

#include<stdio.h>
int main()
{
    int a,b,c,d,e,count,count2;
    printf("\nEnter the five Numbers:");
    scanf("%d%d%d%d%d",&a,&d,&c,&b,&e);
    count=0;
    if (a> 0){count+=1;}
    if (b> 0){count+=1;}
    if (c> 0){count+=1;}
    if (d> 0){count+=1;}
    if (e> 0){count+=1;}
    printf("Number of positive integers is %d" , count);
    int cout = 0;
    if (a==0| b==0|c==0|d==0|e==0)
	{
    	if (a==0){cout+=1;}
    	if (b==0){cout+=1;}
    	if (c==0){cout+=1;}
    	if (d==0){cout+=1;}
    	if (e==0){cout+=1;}
    	count2 = 5 - (cout+count);
	}
	else
		count2 = 5 - count;
    printf("\nNumber of negative integers is %d" , count2);
    
    return 0;
}

