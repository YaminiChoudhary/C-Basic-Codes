#include<stdio.h>
int main()
{
	int flag=1,n,i;
	
	printf("\nEnter the number:");
	scanf("%d",&n);
	
    if(n==1)
    {
    	flag=1;
	}
	else
	{
    	for(i=2;i<=n-1;i++)
		{
			if(n%i==0)
			{
				flag=0;
				break;
			}
		 } 
    }
    if(flag==1)
    {
    	printf("\nPrime No:");
	}
	else
	{
		printf("\nNot a prime no:");
	}
//	printf("\n%d",flag);
	return 0;
}