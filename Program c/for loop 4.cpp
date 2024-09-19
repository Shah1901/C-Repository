#include<stdio.h>
int main()
{
	int i, n, mul=0;
	
	printf("the number for which table is to be made:\n");
	scanf("%d", &n);
	
	printf("The table is given below: \n");
	for(i=1; i<=10; i++)
	{
		mul+=i;
		printf("%d x %d = %d\n", n, i, (n*i));
	}
	return 0;
}
