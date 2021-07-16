/* 28. programm to print the memory adresss of a variable in c*/

#include<stdio.h>
int main()
{
	int num;
	char word;
	printf("\nEnter the character:");
	scanf("%c",&word);
	
	printf("\n The memory location of the given character is %u",&word);
	
	printf("\n Enter a integer:");
	scanf("%d",&num);
	
	printf("\nThe Memory location of the given integer is %u");
	
	return 0;
	
}
