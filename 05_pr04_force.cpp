#include<stdio.h>
float force(float mass);
int main()
{
	float mass;
	printf("Enter mass");
	scanf("%f",&mass);
	
	printf("force %f\n",force(mass));
	
	return 0;
}
float force(float mass)
{
float result =  mass*9.8;
return result;
}
