#include<stdio.h>
int fact(int x);
int main()
{
   int a=6;
   printf("fact %d is %d\n",a,fact(a) );
   
   return 0;
	
}
 int fact(int x)
 {
 	if(x==1||x==0)
 	{
 		return 1;
	 }
	 else
	 {
	 	return x*fact(x-1);
	 }
 }
 
    
