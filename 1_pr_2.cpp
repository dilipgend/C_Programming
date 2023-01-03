#include<stdio.h>
int main()
{
	float radius=5 ,height=9;
	printf("The area of circle is : %f\n",2*radius*radius*3.14);
	printf("the area of cylinder is : %f sq/m3\n",2*3.14*radius*height+2*3.14*radius*radius);
	return 0;
}
