#include<stdio.h>
#include<math.h>
int main ()
{
	
//	int a=2, b=a, c=b+1;
//	
//	printf("%d%d%d", a,b,c);

	int area;
	int length, breadth;
    

	printf("enter length\n");
	scanf("%d", &length);
	
	printf("enter breadth\n");
	scanf("%d", &breadth);
	
    area= length*breadth;
	printf("the area is :%d\n", area);
	return 0;
}
