#include<stdio.h>
int main()
{
	int n, sum=0, i;
	printf("enter the number : \n");
	scanf("%d", &n);
	
	printf("the first %d natural numbers are:\n", n);
	for(i=1; i<=n;i++)
	{
		sum+=i;
		printf("%d\n", i);
		printf("the number is %d\n and its cube is %d\n", i, (i*i*i));
	}
	
	return 0;
}
