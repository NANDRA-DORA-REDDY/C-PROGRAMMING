#include<stdio.h>
int main()
{
int d,m,y,sum,lucky;
printf("Enter d,m,y value");
scanf("%d%d%d",&d,&m,&y);
sum=d+m+y;
lucky=sum%9;
printf("lucky=%d",lucky);
return 0;
}
