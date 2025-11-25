#include<stdio.h>
#include<string.h>
int main()
{
	char n[20],j[20];
	printf("enter string n name ");
	scanf("%s",n);
	strcpy(j,n);
	printf("original string=%s",n);
	printf("\ncopied sting=%s",j);
	return 0;
}
