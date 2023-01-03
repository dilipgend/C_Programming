#include<stdio.h>
int main()
{
	int i=3;
	int*ptr=&i;
	i++;
	printf("the address of i is %d\n",&i);
	printf("the address of i is %d\n",&i+1);
	i++;
	return 0;
}
