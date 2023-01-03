#include<stdio.h>
int main()
{
	int maths , physics , biology;
	float total;
	printf("Enter the marks of maths\n");
	scanf("%d",&maths);
	
	printf("Enter the marks of physics\n");
	scanf("%d",&physics);
	
	printf("Enter the marks of biology \n");
	scanf("%d",&biology);
	
	total= (maths+physics+biology)/3;
	if(total>40 &&maths>=35 &&physics>=35 &&biology>=35 )
	{
		printf("percentage is: %f you are pass \n",total);
	}
	else{
		printf("percentage is: %f you are fail \n",total);
	}
	
     return 0; 	
}
