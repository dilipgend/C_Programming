#include<stdio.h>
void swap(int*a,int*b);
int main()
{
	int a=7,b=5;
	printf("the value of a and b is %d and %d\n",a,b);
	swap(&a,&b);
	printf("After swap the value of a and b is %d and %d \n",a,b);
	
	return 0;
}
void swap(int*a,int*b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
