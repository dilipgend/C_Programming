#include<stdio.h>
int main()
{
	int a=7;
	int *b;
	b=&a;
	
	printf("the address of a is %u\n",b);
	printf("the value of a is %d\n",*b);
	printf("the address of a is %u\n",&a);
	
	return 0;
}
