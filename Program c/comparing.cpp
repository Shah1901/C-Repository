#include<stdio.h>
#include<string.h> 
int main()
{
	int a,b,c, max;
	
	printf("Enter the first number: ");
		scanf("%d", &a);
		
		printf("Enter the second number: ");
		scanf("%d", &b);
		
		printf("Enter the third number: ");
		scanf("%d", &c);
		
		//(a>b)? ((a>c)? printf ("a is greatest") : ("c is greatest")) : ((b>c)? printf("b is greatest") : ("c is greatest"));
	max = (a>b)? ((a>c)? a:c): ((b>c)? b:c);
		printf("%d", max);
		return 0;
	}
