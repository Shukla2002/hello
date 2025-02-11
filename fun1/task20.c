#include<stdio.h>

main()
{
	int age;
	
	printf("Enter Age : ");
	scanf("%d",&age);
	
	//>,<
	if(age>100)
	{
		printf("Invalid age!!");
	}
	else if (age>=18)
	{
		printf("Eligible for vote!!");
	}
	
	else
	{
		printf("Not eligible for vote!!");
	}
}
