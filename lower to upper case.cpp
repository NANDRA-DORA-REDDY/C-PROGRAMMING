#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	printf("enter string name");
	scanf("%s",&s);
	printf("upper case=%s",strupr(s));
	return 0;
}
