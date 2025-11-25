#include<stdio.h>
int main()
{
	char s1[20],s2[20];
	int i,j,flag=0,l1,l2;
	printf("enter s1&s2 names");
	scanf("%s%s",&s1,&s2);
	for(i=0;s1[i]!=0;i++);
	l1=i;
	for(i=0;s2[j]!=0;j++);
	l2=j;
	if(l1=l2)
	{
		for(i=0;s1[i]!=0;i++)
		{
			if(s1[i]!=s2[j])
			flag=1;
    	}
    }
            if(flag==0)
			printf("both strings are  equal");
			else
			printf("both strings are not equal");
			return 0;
}
