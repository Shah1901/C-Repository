#include<stdio.h>
#include<math.h> 
int main()
{
	
int a,b,c;
printf("Enter the value of a : \n");
scanf("%d", &a);

printf("Enter the value of b : \n");
scanf("%d", &b);

printf("Enter the value of c : \n");
scanf("%d", &c);

float d;

d=(b*b-4*a*c);

printf("the value of discriminant is: %f\n", sqrt(d));

return 0;
}
