#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age \n");
	scanf("%d",&age);
	if(age<=70 &&age>=18)
	{
		printf("you can drive \n");
	}
	else
	{
		printf("you cant drive \n");
	}
	return 0;
}
