#include<stdio.h>
main()
{
	int n;
	printf("Enter Number : ");
	scanf("%d",&n);
	if(n==0)
	{
		printf("Neither even nor odd!!");
	}
	else if (n%2==0)
	{
		printf("%d is EVEN!!",n);
	}
	
	else
	{
		printf("%d is Odd!!",n);
		
	}
}
