#include<stdio.h>
int main()
{
	int a[2][2],r,c;
	
	printf("\nEnter The 2x2 array");
	
	for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	printf("\nThe Array Element are:\n");
	
	for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			printf("\t%d",a[r][c]);
		}
		printf("\n");
	}
	return 0;
}