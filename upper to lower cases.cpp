#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	printf("enter string name");
	scanf("%s",&s);
	printf("lower case=%s",strlwr(s));
	return 0;
}
