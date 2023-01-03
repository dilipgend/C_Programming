#include<stdio.h>
int main()
{
	int n=16,prime=1;
	//printf("enter a value\n");
	//scanf("%d",n);
	
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		prime=0;
		break;
    }
		if(prime==0)
		{
			printf("%d is not prime number",n);
		}
		else
		{
			printf("%d is  prime number",n);
		}
	
	return 0;
}
