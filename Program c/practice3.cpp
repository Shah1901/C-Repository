#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a = ",a);
	scanf("%d", &a);
	printf("enter b = ",b);
	scanf("%d", &b);                                                       //z=b*a (legal)
	printf("value of a+b : %d\n",a+b);										//z=a*b (legal)
	printf("value of a-b : %d\n",a-b);										//b*a=z (illegal)
	printf("value of a*b : %d\n",a*b);
	printf("value of a/b : %d\n",a/b);
	return 0;
}
