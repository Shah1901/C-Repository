#include<stdio.h>
int sum(int a, int b);  //function prototype declaration

int main(){
	int c;
	c = sum (2,5);  //function call
	printf("sum is %d", c);
	return 0;
}
sum(int a, int b){
	int result;
	result = a+b;
	return result;
}

