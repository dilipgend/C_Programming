#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks");
	scanf("%d",&marks);
	
	switch(marks)
	{
		case 1:
			printf("students marks is 90 to 100 grade is A");
			break;
			
		case 2:
			printf("students marks is 80 to 90 grade is B \n");
			break;
			
			case 3:
			printf("students marks is 70 to 80 grade is C\n");
			break;
			
			case 4:
			printf("students marks is 60 to 70 grade is D\n");
			break;
			
			case 5:
			printf("students marks is <60 grade is F\n");
			break;	
	}
	return 0;
}
