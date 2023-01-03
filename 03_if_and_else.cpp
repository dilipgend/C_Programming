#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age \n");
	scanf("%d",&age);
	if(age<=90 &&age>=18)
	{
		printf("you can drive vehicles");
		
	}
	else{
		printf("you can't drive vehicles");
	}
	return 0;
}
