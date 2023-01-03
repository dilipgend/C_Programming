#include<stdio.h>
intmain()
{
	int maths , physics , biology;
	
	printf("Enter the marks of maths\n");
	scanf("%d",&maths);
	
	printf("Enter the marks of physics\n");
	scanf("%d",&physics);
	
	printf("Enter the marks of biology \n");
	scanf("%d",&biology);
	
	if((maths>=35 &&physics>=35 &&biology>=35)||((maths+physics+biology)/3)>=40)
	{
		printf("you are pass");
	}
	else{
		printf("you are fail");
	}
	
     return 0; 	
}
