#include<stdio.h>
int sum(int a,int b);
int main()
{
	int a=9, b=11;
	printf("the sum of a and b is:%d\n",sum(a,b));
	
	return 0;
}
int sum(int a,int b)
{
	int sum= int (a+b);
	return sum;
}


