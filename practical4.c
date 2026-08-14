#include<stdio.h>
int main()
{
	int a[5],i;
	float b[5];
	
	printf("array is:");
	for( i=0;i<5;i++)
	   scanf("%d",&a[i]);
	printf("Array a is :");
	for(i=0;i<5;i++) 
	   printf("\t%d",a[i]); 
	   
	printf("\narray is:");
	for( i=0;i<5;i++)
	   scanf("%f",&b[i]);
	printf("Array b is :");
	for(i=0;i<5;i++) 
	   printf("\t%f",b[i]);    
}