#include<stdio.h>
int main()
{
	int num1, num2;
	printf("Enter two numbers");
	scanf("%d%d",&num1 ,&num2);
	if(num1>num2)
	{
		printf("%d number is maximum",num1);
	
	}
     else if(num2>num1)
     {
     	printf("%d number is minimum",num2);
	 }
	 else if(num1==num2)
	 {
	 	printf("both numbers are equal");
	 }
	 return 0;
}
