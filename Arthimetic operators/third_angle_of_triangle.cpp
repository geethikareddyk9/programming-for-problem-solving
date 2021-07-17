/* programm to fiind the third angle as such given two angles*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("\nenter two angles of a triangle:");
	scanf("%d%d",&a,&b);
	c = 180-(a+b);
	printf("\nThe thirdd angle of a given triangle is = %d degree ",c);
	return 0;
	
}
