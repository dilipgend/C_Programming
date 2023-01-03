#include<stdio.h>

void printadd(int i)
{
   printf("the address of function i is %d\n",&i); 
}

int main()
{
	int i=13;
	int*ptr;
	ptr=&i;
	
	printf("the value of variable is %d\n",*ptr);
	printf("the address of variable is %u\n",ptr);
	
	printadd(i);
	printf("the address of  i is %u\n",&i);
	
	return 0;
}
