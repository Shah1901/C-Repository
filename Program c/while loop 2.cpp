#include<stdio.h>
int main()
{	
	int num, sum=0;
	
	printf("input (press 0 to stop)");
	
	while (1) {
		printf("input a number:\n");
		scanf("%d", &num);
		
		if (num==0)
		break;
		
		if (num>0)
		sum+=num;
	}
	printf("sum of positive integers are %d: \n",sum );
	return 0;
	
	}
	
