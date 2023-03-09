#include<stdio.h>
main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("\nEnter A matrix of 2x2\n");
	for(j=0;j<2;j++)
	{
		for(i=0;i<2;i++){
			scanf("%d",&a[j][i]);
		}
		
	}
	printf("Matrix A: \n");
	for(j=0;j<2;j++){
    			for(i=0;i<2;i++){
            		printf("\t%d",a[j][i]);
				}
				printf("\n");
			}
	
	printf("\nEnter B matrix of 2x2\n");
	for(j=0;j<2;j++)
	{
		for(i=0;i<2;i++){
			scanf("%d",&b[j][i]);	
		}
		
    } 
    
   	for(j=0;j<2;j++){
   		for(i=0;i<2;i++){
   			c[j][i]=a[j][i]+b[j][i];
		   }
	   }
	printf("Matrix B: \n");
	for(j=0;j<2;j++){
    			for(i=0;i<2;i++){
            		printf("\t%d",b[j][i]);
				}
				printf("\n");
			}
    
//    printf("\nsum of A & B matrix is %d -> ", c);
    	printf("\nsum of A & B matrix is\n");
    		for(j=0;j<2;j++){
    			for(i=0;i<2;i++){
            		printf("\t%d",c[j][i]);
				}
				printf("\n");
			}
            
            
            

	
}
