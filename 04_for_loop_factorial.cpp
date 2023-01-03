#include<stdio.h>
int main()
{
	int i=0,n,fact=1;
	printf("enter the value \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact *= i;
		
	}
	printf("%d factorial  is  %d \n",n,fact);
	return 0;
}
