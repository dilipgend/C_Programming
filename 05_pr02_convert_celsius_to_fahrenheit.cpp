#include<stdio.h>
float fahrenheit(float celsius);
int main()
{
	int celsius,fahrenheit;
	//fahrenheit=(celsius+32)*9/5;
	printf("Enter the value of celsius\n",fahrenheit);
	scanf("%d",&celsius);
	
	printf("convert celsius to fahrenheit %d\n",fahrenheit);
	return 0;
}
float fahrenheit(float celsius)
{
	float result ;
	result = float(celsius+32)*9/5;
	return result;
}
