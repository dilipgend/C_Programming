#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value \n");
	scanf("%d",&a);
	if (a>0)
	{
		printf("%d is the positive",a);
		
	}
	else if(a<0)
	{
		printf("%d is the negative");
		
	}
	else
	{
		printf("%d is a nutral");
	}
	return 0;
}
