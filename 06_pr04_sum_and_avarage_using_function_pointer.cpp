#include<stdio.h>
void sumavg(int a,int b,int *sum,float *avg)
{
	 *sum=a+b;
	 *avg=(float)*sum/2;
}

int main()
{
	int a,b,sum;
	float avg;
   a=6;
   b=9;
  
  sumavg(a,b,&sum,&avg);
  printf("the sum of and b is %d\n",sum);
  printf("the avarage of a and b is %f\n",avg);
  return 0;
}
