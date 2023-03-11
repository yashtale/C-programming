#include<stdio.h>
main()
{
	float a,b,c;
    char o;
	printf("Enter Expression : ");
	scanf("%f %c %f",&a,&o,&b);
	switch(o)
	{
		case '+' : c=a+b;
				   	break;
		case '-' : c=a-b;
				  	break;
		case '*' : c=a*b;
					break;
		case '/' : c=a/b;
					break;
	}
	printf("= %f",c);
	
}
