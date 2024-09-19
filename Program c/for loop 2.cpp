#include<stdio.h>
int main()
{
	int sum=0, n, i;
	printf("enter the input:\n");
	scanf("%d", &n);
	
	printf(" The first %d natural numbers are:\n", n);
	for(i=1; i<=n; i++)
	{
	sum+=i;
	printf("%d\n", i);
	}
	printf(" the sum of first %d natural numbers are: %d", n, sum);
 	return 0;
}

