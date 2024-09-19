#include<stdio.h>
#include<string.h> 
int main()
{
	int a,b,c,d, max;
	
	printf("Enter the first number: ");
		scanf("%d", &a);
		
		printf("Enter the second number: ");
		scanf("%d", &b);
		
		printf("Enter the third number: ");
		scanf("%d", &c);
		
		printf("Enter the fourth number: ");
		scanf("%d", &d);
		
	max = (a>b)? (a>c? ((a>d)? a:d) : ((c>d)? c:d)):(b>c? ((b>d)?b:d): (c>d)? c:d);
		printf("%d", max);
		return 0;
	}
