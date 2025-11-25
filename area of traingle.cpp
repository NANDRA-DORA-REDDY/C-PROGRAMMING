#include<stdio.h>
int main()
{
	float b,h,area;
	printf("enter h,b values");
	scanf("%f%f",&h,&b);
	area=0.5*b*h;
	printf("area of triangle=%f",area);
	return 0;
}
