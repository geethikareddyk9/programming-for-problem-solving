/* to find distance b/w to coordinate points*/
#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,y1,y2,distance;
	printf("\nEnter point(x1,y1):");
	scanf("%f%f",&x1,&y1);
	printf("\nEnter point(x2,y2)");
	scanf("%f%f",&x2,&y2);
	
	distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	
	printf("\nThe distance between two co-orndinates is given as = %f", distance);
	
	return 0;
}
