#include<stdio.h>
main()
{
	int n1,n2,n3;
	
	printf("Enter Number 1 : ");
	scanf("%d",&n1);
	printf("Enter Number 2 : ");
	scanf("%d",&n2);
	printf("Enter Number 3 : ");
	scanf("%d",&n3);

	if (n1>n2 && n1>n3)
	{
		printf("Number 1 is Greatest!!");
	}
	else if(n2>n1 && n2>n3)
	{
		printf("Number 2 is Greatest!!");
	}
	else
	{
		printf("Number 3 is Greatest!!");
	}

}
