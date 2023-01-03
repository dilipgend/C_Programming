#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number : \n");
	scanf("%d",&a);
	
	
	if(a%2==0)
	{
		
		printf("the value a is even : %d\n",a);
		
    }
	else
	{
		printf("the value a is odd : %d\n",a);
	}

	return 0;
}
