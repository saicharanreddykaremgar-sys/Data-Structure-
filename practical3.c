#include<stdio.h>
int main()
{
	int i;
	
	int a[]={1,2,3,4};
	float b[]={1.1,1.2,1.3,1.4};
	printf("integers are:");
	 for(i=0;i<4;i++)
	 {
	 	printf("\t%d",a[i]);
	 	
	 }
	printf("\nvalue is:");
	for(i=0;i<4;i++)
	  printf("\t%.2f",b[i]); 
	 
	
}