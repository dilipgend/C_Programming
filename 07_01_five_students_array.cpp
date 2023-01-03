#include<stdio.h>
int main()
{
	int marks[5];
	printf("the marks of student 1:\n");
	scanf("%d",&marks[0]);
	
	printf("the marks of student 2:\n");
	scanf("%d",&marks[1]);
	
	printf("the marks of student 3:\n");
	scanf("%d",&marks[2]);
	
	printf("the marks of student 4:\n");
	scanf("%d",&marks[3]);
	
	printf("the marks of student 5:\n");
	scanf("%d",&marks[4]);
	
	printf("you have entered %d %d %d %d %d \n\t",marks[0],marks[1],marks[2],marks[3],marks[4]);
	return 0;
	
}
