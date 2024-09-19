#include<stdio.h>
int main()  {

int Length , Breadth;
printf("Enter Length:\n");
scanf("%d" , &Length);
printf("Enter Breadth:\n");
scanf("%d", &Breadth);
int area=Length*Breadth;
printf("the area of rectangle is %d\n", area);	
	
	
int side;
printf("Enter side:\n");
scanf("%d", &side);
int volume= side*side*side;
printf("the volume of square is %d\n:", volume);

return 0;	
}
