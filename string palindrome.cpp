#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int l,i,j,flag=0;
	printf("enter string name");
	scanf("%s",s);
	l=strlen(s);
	for(i=0,j=l-1;i<j;i++,j--);
	{
		if(s[i]!=s[j]);
		{
			flag=1;
		}
	}
	if(flag==0)
	printf("it is a palindrone string");
	else
	printf("it is not a palindrone string");
	return 0;
}
