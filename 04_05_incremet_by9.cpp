#include<stdio.h>
int main()
{
	int a;
	printf("the value of a is :");
	scanf("%d",&a);
	
	while(a<=100)
	{
		printf("the increment of a is : %d\n",a);
		a+=9;
		
	}
	
	return 0;
}
