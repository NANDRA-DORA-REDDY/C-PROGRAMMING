#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j,k;
	printf("enter A row & column");
	scanf("%d%d",&r1,&c1);
	printf("enter B row & column");
	scanf("%d%d",&r2,&c2);
	if(r1!=c2)
	{
		printf("matrix multiplication is not possile");
		exit(1);
	}
	
	return 0;
}
