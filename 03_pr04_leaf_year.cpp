#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("Enter the year \n");
	scanf("%d",&year);
	
	if(year%400==0){
		printf("%d this year is leap ",year);
	}
		else if(year%100==0){
		printf("%d this year is leap ",year);
	}
	else if(year%4==0){
		printf("%d this year is leap ",year);
    }
     
     else
         { 
         printf("%d this is not leap year",year);
		 }
	return 0;
}
