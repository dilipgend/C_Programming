#include<stdio.h>
int main()
{
	int marks[12];
	for(int i=0;i<12;i++)
	{
	printf("Enter the  marks of student is %d\n",i+1);
	scanf("%d",&marks[i]);
    }
    
    for(int i=0;i<12;i++)
    {
	
	printf("Enter the value marks  marks of student %d is %d\n",i+1,marks[i]);
    }
    
	return 0;
}
