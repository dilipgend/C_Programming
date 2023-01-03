#include<stdio.h>

void printadd(int i)
{
	printf("the Address of i is %d\n" ,&i);

}
int main()
{

    int i=10;
    int*ptr;
    ptr=&i;
    printadd(i);
    printf("the value of i is10 times %d\n ",*ptr*10);
    
    printf("the address of is  %d\n",ptr);
    printf("the value of i is %d\n",*ptr);

return 0;
}
