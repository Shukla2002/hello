#include<stdio.h>

main()
{
	//open content close
	FILE *fptr;
	
	fptr = fopen("test1.txt","r");
	
	char a[100];
	
	fgets(a,100,fptr);
	
	printf("%s",a);
	fclose(fptr);
	
}
