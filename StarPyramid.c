#include<stdio.h>
main()
{
	int i,j,k,l;
	for(i=5,j=1;i<=9,j<=9;i--,j+=2)
	{
		for(k=1;k<=i;k++)
		printf(" ");
		for(l=1;l<=j;l++)
		printf("*");
		printf("\n");
	}
}
